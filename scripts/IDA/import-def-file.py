# -----------------------------------------------------------------------
# This is an example illustrating how to enumerate imports
# (c) Hex-Rays
#
import idaapi
import idautils

def ReadDefFileLine(line):
    line = line.strip()
    if not line or line[0] == ';':
        return
    name,ordinal = line.split()
    ordinal = ordinal.replace("@","")
    if not name or not ordinal:
        return
    return (name,int(ordinal))

def ImportDefFileNames(filename):
    with open(filename,"r") as file:
        for i, line in enumerate(file):
            defLine = ReadDefFileLine(line)
            if defLine:
                (name,ordinal) = defLine
                print("Ordinal :{} Name:{}".format(ordinal,name))
                entry_ea = GetEntryPoint(ordinal)
                if entry_ea != BADADDR:
                    MakeName(entry_ea, name)

def ReadPrototypeLine(line):
    line = line.strip()
    line = line.split('/')[0] #remove comments
    if not line:
        return
    (ordinal,prototype) = line.split(" ",1)
    return (int(ordinal),prototype)

def ImportEntriesPrototypes(filename):
    notFoundOrdinals = []
    with open(filename,"r") as file:
        for i, line in enumerate(file):
            defLine = ReadPrototypeLine(line)
            if defLine:
                (ordinal,prototype) = defLine
                entry_ea = GetEntryPoint(ordinal)
                outputStr = "Ordinal :{} prototype:{}".format(ordinal,prototype)
                if entry_ea != BADADDR:
                    if not GetTinfo(entry_ea):
                        SetType(entry_ea, prototype)
                else:
                    notFoundOrdinals.append(outputStr)
    if len(notFoundOrdinals):
        print("Unknown ordinals(not in this .dll):")
        for str in notFoundOrdinals:
            print(str)

filename = AskFile(forsave=0, mask = "*.def;*.txt", prompt="Choose a .def file to import")
if filename:
    ImportEntriesPrototypes(filename)
else:
    print(".def import was canceled")