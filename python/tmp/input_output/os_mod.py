#!/usr/bin/python3

import os


with open("os.txt", mode="w", encoding="utf-8") as f:
    f.write("Some random text\nMore random text\nEven more...shit.\n")

with open("os.txt", encoding="utf-8") as f:
    print(f.read())

print(f.closed)
print(f.name)
print(f.mode)
print(f.encoding)

os.rename("os.txt", "os1.txt")
os.remove("os1.txt")
os.mkdir("os_dir")
os.chdir("os_dir")

print("Current Directory: ", os.getcwd())

os.chdir("../")
os.rmdir("os_dir")
