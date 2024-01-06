#!/usr/bin/python3

for element in [1, 2, 3]:
    print(element, end=' ')
print()

for element in (1, 2, 3):
    print(element, end=' ')
print()

for key, value in {'one': 1, 'two': 2, 'three': 3}.items():
    print(f"{key}: {value}", end=' ')
print()

for char in "123":
    print(char, end=' ')
print()

for line in open("myfile.txt"):
    print(line, end='')
print()
