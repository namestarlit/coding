#!/usr/bin/python3

import sys

while True:
    response = input("Do you want to continue? (yes/no) ")
    if response.lower().startswith('y'):
        print("Continuing...")
    else:
        print("Exiting...")
        sys.exit()
