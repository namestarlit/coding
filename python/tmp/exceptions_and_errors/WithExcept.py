#!/usr/bin/python3

# this leaves the file open for an indeterminate
# amount of time after this part of code has 
# finished executing
for line in open("myfile.txt"):
    print(line, end= "")

# 'with' statement allows objects like files to be
# used in a way that ensures they are always cleaned up
# promptly and correctly.
with open("myfile.txt") as f:
    for line in f:
        print(line, end="")
