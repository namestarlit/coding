#!/usr/bin/python3

"""Demonstrates f.write() method."""

with open("write", 'a', encoding="utf-8") as f:
    write = f.write("This is how you write to a file.\n")
    
    value = ('the answer', 42)
    s = f.write(str(value) + '\n')


with open("write", 'r', encoding="utf-8") as f:
    for line in f:
        print(line, end='')
