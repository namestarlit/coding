#!/usr/bin/python3

with open("text.txt", 'r', encoding="utf-8") as f:
    last_line = ''
    for line in f:
        last_line = line
    print(last_line)

with open("text.txt", 'r') as f:
    lines = f.readlines()
    print(lines)
    # Remove whitespace at the beginning and end of of last line
    last_line = lines[-1].strip()

    # check if last_line is not empty
    if last_line:
        print(last_line)
