# -----------------------------------------------------------------------
# IDA python script to export the dll exports ordinals information

import idaapi
import idautils
import ida_loader
import idc
import getopt
import os

outputbasedir = "./CE_Database/"

def tryNormalizeName(currentName, expectedStart):
    lowercaseName = currentName.lower()
    lowercaseExpectedStart = expectedStart.lower()
    if lowercaseName.startswith(lowercaseExpectedStart):
        newName = expectedStart + currentName[len(expectedStart):]
        return newName

def RemovePrefix(name, prefix):
    name = name.replace(prefix,"",1)
    if name.startswith("_"):
        name = name[1:]
    return name

def LoadDllsImportForModule(moduleName):
    importers = {}
    for directoryName in sorted(os.listdir(outputbasedir)):
        importerName = directoryName.replace(".imports", "")
        if importerName == directoryName:
            continue

        ordinalsFileName = os.path.join(outputbasedir, directoryName, moduleName + ".imported.txt")
        try:
            ordinalsFile = open(ordinalsFileName, "r")
            importedOrdinalList = [x.strip() for x in ordinalsFile.readlines() if x]
            if len(importedOrdinalList):
                importers[importerName] = importedOrdinalList
                print("Found %d imports in %s" %(len(importedOrdinalList),directoryName))

        except:
            pass
    return importers

def GetImportersList(modulesImportsList, ordinal, name):
    importers = []
    for moduleName, importsList in modulesImportsList.items():
        if (str(ordinal) in importsList) or (name in importsList):
            importers.append(moduleName)
    return importers

def PrintImportersStats(outfile, modulesImportsList):
    if modulesImportsList:
        print("// For each of the other .DLLs, here are the number of imports of the current module exports:", file=outfile)
        print("// (Note that this is not the number of uses/references, just the number of times the current module is listed in the import table)", file=outfile)
        for moduleName, importsList in modulesImportsList.items():
            print("// |- {:16} : {:>3}".format(moduleName, len(importsList)), file=outfile)
    else:
        print("// No dll referencing the current module exports was found.", file=outfile)

def DumpExport(outfile, inputFileBase, modulesImportsList, exp_index, exp_ordinal, exp_ea, exp_name, invalidFormatNames):
    print("/// @ordinal {}".format(exp_ordinal), file=outfile)
    name = idc.get_name(exp_ea, idc.calc_gtn_flags(idc.BADADDR,exp_ea))
    expectedNameStart = inputFileBase + "_" + str(exp_ordinal)
    if not name.startswith(expectedNameStart):
        normalizedName = tryNormalizeName(name,expectedNameStart)
        if normalizedName:
            print("replacing " + name + " by " + normalizedName)
            idc.make_name(exp_ea, normalizedName)
            name = normalizedName
        else:
            invalidFormatNames.append(name + "(expected " + expectedNameStart + ")")
    if name != expectedNameStart:
        name = RemovePrefix(name, expectedNameStart)
    print("/// @name {}".format(name), file=outfile)
    print("/// @address {:x}".format(exp_ea), file=outfile)
    importers = GetImportersList(modulesImportsList, exp_ordinal, name)
    if importers:
        print("/// Imported by {}".format(importers), file=outfile)
    else:
        print("/// Not imported by any .dll", file=outfile)
    tinfo = idc.get_tinfo(exp_ea)
    # Note: One way to force types not to be guessed could be to call MakeName ?
    if tinfo is not None:
        (type, fields) = tinfo
        print(idaapi.idc_print_type(type, fields, name, 0) +";", file=outfile)
    else:
        guessedType = idc.guess_type(exp_ea)
        if guessedType is not None:
            print("/// @guessedtype {}".format(guessedType), file=outfile)
        else:
            print("/// Failed to extract type", file=outfile)

def DumpAllExports():
    invalidFormatNames = []
    pe = peutils_t()
    baseaddr = pe.imagebase
    print ("Listing module {} exports with base address {:x}".format(idc.get_root_filename(),baseaddr))
    exportsList = list(idautils.Entries())
    print ("Found %d exports(s)..." % len(exportsList))
    inputFileBase = os.path.splitext(idc.get_root_filename())[0]

    outfileName = os.path.join(outputbasedir, idc.get_root_filename() + ".exports.h")

    print ("Loading list of dlls importing current module")
    modulesImportsList = LoadDllsImportForModule(idc.get_root_filename())

    print ("Dumping ordinals to " + outfileName)
    outfile = open(outfileName, 'w')

    print("// List of {} exports (base address {:x})".format(idc.get_root_filename(),baseaddr), file=outfile)
    PrintImportersStats(outfile, modulesImportsList)
    print("\n", file=outfile)

    for exp_index, exp_ordinal, exp_ea, exp_name in list(idautils.Entries()):
        if exp_name == "DllEntryPoint":
            continue
        DumpExport(outfile, inputFileBase, modulesImportsList, exp_index, exp_ordinal, exp_ea, exp_name, invalidFormatNames)
        print("", file=outfile)
    print ("All done...")

    if invalidFormatNames:
        print ("Badly formated names:")
        for name in invalidFormatNames:
            print (name)


DumpAllExports()

# To be used with command line to exit ida at the end of the script
if "--exitida" in idc.ARGV:
    ida_loader.set_database_flag(ida_loader.DBFL_KILL)
    idc.qexit(0)
elif len(idc.ARGV) >= 2:
    print ("Unknown argument" + str(idc.ARGV))