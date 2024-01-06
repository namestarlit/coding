#!/usr/bin/python3

class Person(object):

    def __init__(self, name):
        self.name = name

    def __str__(self):
        s = f"Name: {self.name}\n"

        for key, value in self.__dict__.items():
            s += f"{key}: {value}\n"
        return s


person1 = Person('Joe')
person1.age = 22
person1.weight = 73
person1.hometown = "Nairobi"
person1.sport = "Basketball"

print(person1.__dict__)
print()
print(person1)
