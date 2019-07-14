
import sys, os, getopt
import re
import subprocess

def main(argv):
    usagestring = 'batch_ida.py --ida=<PathTo idaw.exe> --script=<PathToScript> [--diagnostic]'

    
    try:
      opts, args = getopt.getopt(argv,"",["ida=","script=", "diagnostic"])
    except getopt.GetoptError:
        print usagestring
        sys.exit(2)

    idapath = {}
    scriptpath = {}
    diagnostic = False

    for opt, arg in opts:
        if opt == "--ida":
            idapath = arg
        elif opt=="--script":
            scriptpath = arg
        elif opt=="--diagnostic":
            diagnostic = True

            
    if not idapath or not scriptpath:
        print usagestring
        sys.exit(2)
    
    backupRegularExp = re.compile(".*_[0-9]+.idb")

    for entryName in os.listdir("."):
        if entryName.endswith(".idb"):
            if backupRegularExp.match(entryName):
                if diagnostic: print "Ignoring %s, detected as backup" % entryName
            else:
                print "Running sctipt for %s" % (entryName)
                if not diagnostic:
                    subprocess.call([idapath, '-A', ('-S"%s"' % scriptpath), entryName])
    if not diagnostic:
        os.system('cls')
    print "Done executing batch !"
        
            
            
if __name__ == "__main__":
   main(sys.argv[1:])