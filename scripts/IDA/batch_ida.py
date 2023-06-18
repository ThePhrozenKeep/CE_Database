
import sys, os, getopt
import re
import subprocess

def main(argv):
    usagestring = 'batch_ida.py --ida=<PathTo idaq.exe> --script=<PathToScript [Script arguments]> [--diagnostic]'

    
    try:
      opts, args = getopt.getopt(argv,"",["ida=","script=", "diagnostic"])
    except getopt.GetoptError:
        print(usagestring)
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
        print(usagestring)
        sys.exit(2)
    
    backupRegularExp = re.compile(".*_[0-9]+.idb")

    for entryName in os.listdir("."):
        if entryName.endswith(".idb"):
            if backupRegularExp.match(entryName):
                if diagnostic: print("Ignoring %s, detected as backup", entryName)
            else:
                # note: We can not use subprocess.call with a list of args because somehow it messes up the scriptpath if it contains a space (necessary for scripts with params)
                commandToExecute='\"{}\" -A -S\"{} --exitida\" "{}"'.format(idapath, scriptpath, entryName)
                if not diagnostic:
                    print("Running sctipt for %s" % entryName)
                    try:
                        subproc = subprocess.run(commandToExecute, check=True, capture_output=True)
                    except subprocess.CalledProcessError as e:
                        print("Failed to run '%s' with error:" % commandToExecute)
                        print(e.stderr)
                        sys.exit(e.returncode)

                else:
                    print("Would call:\n{}\n".format(commandToExecute))
    print("Done executing batch !")
        
            
            
if __name__ == "__main__":
   main(sys.argv[1:])