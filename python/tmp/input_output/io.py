#!/usr/bin/python3

# reading from a file using f.read()
with open("text.txt", 'r', encoding="utf-8") as f:
    read = f.read()

print(read)

# reading a single line from a file using f.readline()
with open("text.txt", 'r', encoding="utf-8") as f:
    readline = f.readline()
    readline1 = f.readline()
    readline2 = f.readline()

print(readline)
print(readline1)
print(readline2)

# reading an entire file using a loop
# ommiting mode defaults to read mode 'r'
with open("text.txt", encoding="utf-8") as f:
    for line in f:
        print(line, end='')
