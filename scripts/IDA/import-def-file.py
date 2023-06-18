# -----------------------------------------------------------------------
# Small utility to import names from .def files using ordinals.
# -----------------------------------------------------------------------

import idaapi
import idautils
import idc
import ida_kernwin
import os

def filenameNoExt(filename):
    return os.path.splitext(os.path.basename(filename))[0]

def removeprefix_case_insensitive(instr, prefix):
    if instr.casefold().startswith(prefix.casefold()):
        return instr[len(prefix):]
    return instr

def ImportOrdinalNamesFromDef(filename):
    with open(filename,"r") as file:
        libraryNameFromDef=""
        while line := file.readline():
            line = line.strip()
            if line == "" or line.startswith(';'):
                continue
            lineWords = line.split()
            firstwordUpper = str.upper(lineWords[0])
            if firstwordUpper =="LIBRARY":
                libraryNameFromDef = lineWords[1]
                continue
            if firstwordUpper =="EXPORTS":
                break
            print("Unknown .def format")
            return
        if libraryNameFromDef:
            print(".def file gave LIBRARY=%s" % libraryNameFromDef)

        nameFromFile = filenameNoExt(filename)

        libraryIsCurrentFile = False
        rootFilenameNoExt = filenameNoExt(idc.get_root_filename())
        if filename.casefold() == rootFilenameNoExt.casefold():
            libraryIsCurrentFile = True
        if libraryNameFromDef.casefold() == rootFilenameNoExt.casefold():
            libraryIsCurrentFile = True

        nimps = idaapi.get_import_module_qty()

        ordinalToEA = {}

        if libraryIsCurrentFile:
            print("Importing exports of current file")
            for index, ordinal, ea, name in idautils.Entries():
                ordinalToEA[ordinal] = ea
            moduleName = filenameNoExt(idc.get_root_filename())
        else:
            print("Importing imports of current file")
            def enum_import_callback(ea, name, ordinal):
                ordinalToEA[ordinal] = ea
                return True
            
            moduleName = ""
            for moduleIdx in range(0, nimps):
                name = idaapi.get_import_module_name(moduleIdx)
                if not name:
                    print("Failed to get import module name for module #%d" % moduleIdx)
                    continue
                if filenameNoExt(name).casefold() == nameFromFile.casefold() or filenameNoExt(name).casefold() == libraryNameFromDef.casefold():
                    print("Found imports for %s." % name)
                    moduleName = name
                    idaapi.enum_import_names(moduleIdx, enum_import_callback)
                    break
            if not moduleName:
                print("Didn't find %s in the imports." % nameFromFile)
                return


        while line := file.readline():
            line = line.strip()
            if line == "" or line.startswith(';'):
                continue
            lineWords = line.split()
            if(lineWords[1].startswith('@')):
                ordinalName = lineWords[0]
                ordinal = int(lineWords[1][1:])
                if ordinal in ordinalToEA:
                    print("%d => %x : %s" %(ordinal, ordinalToEA[ordinal], ordinalName))
                    
                    fullprefix = "%s_%d" % (moduleName, ordinal)
                    if ordinalName.casefold() == fullprefix.casefold():
                        ordinalName = ""
                    else:
                        ordinalName = removeprefix_case_insensitive(ordinalName, fullprefix + "_")
                        ordinalName = removeprefix_case_insensitive(ordinalName, moduleName + "_")
                        ordinalName = fullprefix + "_" + ordinalName
                    if not libraryIsCurrentFile:
                        if ordinalName: # Don't delete name
                            idc.set_name(ordinalToEA[ordinal], ordinalName, 0)
                    else:
                        if ordinalName: # Don't delete name
                            idc.rename_entry(ordinal, ordinalName)
                        #else:
                        #    idc.rename_entry(ordinal, fullprefix)
                        #    # Remove previously set name
                        #    idc.set_name(ordinalToEA[ordinal], "", 0)
                            



filename = ida_kernwin.ask_file(False, "*.def;*.txt", "Choose a .def file to import")
if filename:
    ImportOrdinalNamesFromDef(filename)
else:
    print(".def import was canceled")