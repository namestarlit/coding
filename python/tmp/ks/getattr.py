#!/usr/bin/python3

class Person(object):
    """defines a person class"""
    def __init__(self, name, age):
        self.name = name
        self.age = age


person = Person('John', 30)

name_attr = getattr(person, 'name')
age_attr = getattr(person, 'age')

print(name_attr)
print(age_attr)

default_attr = getattr(person, 'height', 180)
print(default_attr)
