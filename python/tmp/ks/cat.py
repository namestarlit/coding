#!/usr/bin/env python3
"""something random"""
from sys import argv


def cat(filename):
    """prints a file to the console"""
    try:
        with open(filename, encoding="utf-8") as file:
            lines = file.readlines()
            for line in lines:
                print(line.strip())
    except Exception as e:
        print(f"Error: {e}")


if __name__ == "__main__":
    if len(argv) == 2:
        filename = argv[1]
        cat(filename)
    else:
        print("Usage: ./cat.py filename")
