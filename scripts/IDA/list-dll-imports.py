# -----------------------------------------------------------------------
# This is an example illustrating how to enumerate imports
# (c) Hex-Rays
#
import idaapi
import idautils
import ida_loader
import errno
import idc
import os

outputbasedir = "./CE_Database/"
outfile = {}

def imp_cb(ea, name, ord):
    if ord:
        print("%d" % (ord), file=outfile)
    else:
        print("%s" % (name), file=outfile)
    return True

nimps = idaapi.get_import_module_qty()

print("Found %d import(s)..." % nimps)
outputdir = outputbasedir + idc.get_root_filename() + ".imports/"
print ("Writing list of imports to " + outputdir)

try:
    os.makedirs(outputdir)
except OSError as e:
    if e.errno != errno.EEXIST:
        raise  # raises the error again


for i in range(0, nimps):
    name = idaapi.get_import_module_name(i)
    if not name.endswith(".dll"):
        name = name + ".dll"
    if not name:
        print("Failed to get import module name for #%d" % i)
        continue
    outfilename = outputdir+name+".imported.txt"
    outfile = open(outfilename,"w")

    print("Writing %s imports to %s" % (name,outfilename))
    idaapi.enum_import_names(i, imp_cb)

print("All done...")

outfile.close()

# To be used with command line to exit ida at the end of the script
if "--exitida" in idc.ARGV:
    ida_loader.set_database_flag(ida_loader.DBFL_KILL)
    idc.qexit(0)
elif len(idc.ARGV) >= 2:
    print ("Unknown argument" + str(idc.ARGV))