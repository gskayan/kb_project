import subprocess
import os

os.environ["PROJ_BIN_DIR"] = "/home/gskaian/myproject/bin"

print "Executable directory : " + os.environ["PROJ_BIN_DIR"] 

subprocess.call("$PROJ_BIN_DIR/kbUtest", shell=True)
