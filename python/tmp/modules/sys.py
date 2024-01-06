#!/usr/bin/python3

import sys
from sys import stderr
from sys import stdout

stderr.write("This is writting to the stderr\n")
stdout.write("This is writting to the stdout\n")
sys.exit()
