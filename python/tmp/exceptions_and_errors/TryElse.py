#!/usr/bin/python3

import sys

# try..except has an optional else
# statement which contains the rest of
# the code to be excuted if no exception
# is raised by try clause

args = len(sys.argv) - 1        # - 1 to remove the first argument
# args = len(sys.argv[1:]       # this is valid too to remove the first arg
if args < 1:
    print("Usage: ./TryError.py <filename>")
    sys.exit()

for arg in sys.argv[1:]:
    try:
        f = open(arg, 'r')
    except OSError:
        print("Cannot open", arg)
    else:
        print(arg, 'has', len(f.readline()), 'lines')
        f.close()
