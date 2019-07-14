# -----------------------------------------------------------------------
# This is an example illustrating how to enumerate imports
# (c) Hex-Rays
#
import idaapi
import idautils
import errno

outfile = {}

def imp_cb(ea, name, ord):
    if ord:
        print >> outfile, "%d" % (ord)
    else:
        print >> outfile, "%s" % (name)
    return True

nimps = idaapi.get_import_module_qty()

print "Found %d import(s)..." % nimps
outputdir = "./" + GetInputFile() + ".imports/"
print "Writing list of imports to " + outputdir

try:
    os.makedirs(outputdir)
except OSError as e:
    if e.errno != errno.EEXIST:
        raise  # raises the error again


for i in xrange(0, nimps):
    name = idaapi.get_import_module_name(i)
    if not name.endswith(".dll"):
        name = name + ".dll"
    if not name:
        print "Failed to get import module name for #%d" % i
        continue
    outfilename = outputdir+name+".imported.txt"
    outfile = file(outfilename,"w")

    print "Writing %s imports to %s" % (name,outfilename)
    idaapi.enum_import_names(i, imp_cb)

print "All done..."

outfile.close()