#!/usr/bin/python3

import datetime


class Person(object):
    
    def __init__(self, name, age):
        self.name = name
        self.age = age

    @classmethod
    def from_birth_year(cls, name, birth_year):
        age = datetime.date.today().year - birth_year
        return cls(name, age)

    def __str__(self):
        return f"Name: {self.name} Age: {self.age}"

person1 = Person("John", 30)
person2 = Person.from_birth_year("Jane", 1995)

print(person1)
print(person2)
