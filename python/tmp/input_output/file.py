#!/usr/bin/python3
"""Demonstrates how to work with files in python."""

import io


with open("file.txt","r", encoding="utf-8") as f:
    print(f.name)       # Returns name of the file object
    print(f.encoding)   # Returns encoding format used on a file
    print(f.mode)       # Returns the mode used to open the file
    print()

    print(f.read())     # Reads contents of a file
    print(f.seek(0))    # Moves cursor to the beggining of the file
    print()
    
    print(f.read(16))   # Moves the cursor to the 17th position in the file
    print(f.read(1))    # Moves on more step from current position
    print(f.read(1))    
    print(f.tell())     # Returns current position of a cursor in a file
    print(f.seek(0))
    print()

    for line in f:
        print(line, end="")

        for line in f:
            print(line, end="")
    print()
    f.seek(0)           # seek to the beginning of the file (SEEK_SET)

    line_number = 0

    for line in f:
        line_number += 1
        print("{:>4} {}".format(line_number, line.rstrip()))

output = io.StringIO()
output.write("First line.\n")
print("Second line.", file=output)

# Retrive file contents --this will be
# 'First line.\nSecond line.\n'
contents = output.getvalue()

# Close object and discard memory buffer --
# getvalue() will now raise and exception
output.close()
