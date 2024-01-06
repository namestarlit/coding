#!/usr/bin/python3

name = "Paul John"
age = 22

# simple syntax
print(f"Hello, {name}. You're {age} years old")
print(F"Hello, {name}. You're {age} years old")
print()

# Arbitary expressions
print(f"You'll be {age + 10} years old in ten years")
print(f"22 + 10 = {20 + 10}")
print()

def to_lowercase(input):
    return input.lower()

# You can pass functions to f-string
print(f"{to_lowercase(name)} is in love")
print(f"{name[:4]} is my first name")
print(f"{name[5:]} is my last name")

class onlyone(object):
    def __init__(self, first_name, middle_name, age):
        self.first_name = first_name
        self.middle_name = middle_name
        self.age = age
        return None

    def __str__(self):
        return f"{self.first_name} {self.middle_name} is {self.age}"

    def __repr__(self):
        return f"{self.first_name} {self.middle_name} is my only one! I love her"

# you can pass classes to f-string
babe = onlyone("Asnath", "John", "22")
print(f"{babe}")
print(f"{babe!r}")
print()

print(f"My babe is {babe.first_name}")
