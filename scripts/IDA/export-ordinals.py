# -----------------------------------------------------------------------
# IDA python script to export the dll exports ordinals information

import idaapi
import idautils

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
    for directoryName in os.listdir("."):
        importerName = directoryName.replace(".imports", "")
        if importerName == directoryName:
            continue

        ordinalsFileName = os.path.join(directoryName, moduleName + ".imported.txt")
        try:
            ordinalsFile = file(ordinalsFileName, "r")
            importedOrdinalList = [x.strip() for x in ordinalsFile.readlines()]
            if len(importedOrdinalList):
                importers[importerName] = importedOrdinalList
                print "Found %d imports in %s" %(len(importedOrdinalList),directoryName)

        except:
            pass
    return importers

def GetImportersList(modulesImportsList, ordinal, name):
    importers = []
    for moduleName, importsList in modulesImportsList.iteritems():
        if (str(ordinal) in importsList) or (name in importsList):
            importers.append(moduleName)
    return importers


def DumpExport(outfile, inputFileBase, modulesImportsList, exp_index, exp_ordinal, exp_ea, exp_name, invalidFormatNames):
    print >> outfile, "/// @ordinal {}".format(exp_ordinal)
    name = GetTrueNameEx(BADADDR,exp_ea);
    expectedNameStart = inputFileBase + "_" + str(exp_ordinal)
    if not name.startswith(expectedNameStart):
        normalizedName = tryNormalizeName(name,expectedNameStart)
        if normalizedName:
            print "replacing " + name + " by " + normalizedName
            MakeName(exp_ea, normalizedName)
            name = normalizedName
        else:
            invalidFormatNames.append(name + "(expected " + expectedNameStart + ")")
    if name != expectedNameStart:
        name = RemovePrefix(name, expectedNameStart)
    print >> outfile, "/// @name {}".format(name)
    print >> outfile, "/// @address {:x}".format(exp_ea)
    importers = GetImportersList(modulesImportsList, exp_ordinal, name)
    if importers:
        print >> outfile, "/// Imported by {}".format(importers)
    else:
        print >> outfile, "/// Not imported by any .dll"
    tinfo = GetTinfo(exp_ea)
    # Note: One way to force types not to be guessed could be to call MakeName ?
    if tinfo is not None:
        (type, fields) = tinfo
        print >> outfile,idaapi.idc_print_type(type, fields, name, 0) +";"
    else:
        guessedType = GuessType(exp_ea)
        if guessedType is not None:
            print >> outfile,"/// @guessedtype {}".format(guessedType)
        else:
            print >> outfile,"/// Failed to extract type"

def DumpAllExports():
    invalidFormatNames = []
    pe = peutils_t()
    baseaddr = pe.imagebase
    print "Listing module {} exports with base address {:x}".format(GetInputFile(),baseaddr)
    exportsList = list(idautils.Entries())
    print "Found %d exports(s)..." % len(exportsList)
    inputFileBase = os.path.splitext(GetInputFile())[0]

    outfileName = GetInputFile() + ".exports.h"

    print "Loading list of dlls importing current module"
    modulesImportsList = LoadDllsImportForModule(GetInputFile())

    print "Dumping ordinals to " + outfileName
    outfile = file(outfileName,"w")

    print >> outfile, "// List of {} exports (base address {:x})\n\n".format(GetInputFile(),baseaddr)
    for exp_index, exp_ordinal, exp_ea, exp_name in list(idautils.Entries()):
        if exp_name == "DllEntryPoint":
            continue
        DumpExport(outfile, inputFileBase, modulesImportsList, exp_index, exp_ordinal, exp_ea, exp_name, invalidFormatNames)
        print >> outfile,""
    print "All done..."

    if invalidFormatNames:
        print "Badly formated names:"
        for name in invalidFormatNames:
            print name

DumpAllExports()
