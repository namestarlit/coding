#!/usr/bin/python3

import sys

try:
    f = open('myfile.txt')
    s = f.readline()
    i = int(s.strip())
except OSError as err:
    print("OS Error: ", err)
except ValueError:
    print("could not convert data to an integer.")
except Exception as err:
    print("Unexpected {err=}, {type(err)=")
    raise
