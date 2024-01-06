#!/usr/bin/python3
"""
A module to demonstarate open() function.

open(filename, mode, enconding=None)
"""

f = open('workfile', 'w', encoding="utf-8")

with open('workfile', encoding="utf-8") as f:
    read_data = f.read()

print(f.closed)
