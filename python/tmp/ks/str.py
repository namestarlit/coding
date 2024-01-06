#!/usr/bin/python3

class Person(object):
    """Defines a Person class"""

    def __init__(self, name=None, gender=None, age=None):
        """Initializes a Person class"""
        self.name = name
        self.gender = gender
        self.age = age

    def __str__(self):
        """string representantion of objects"""
        return f"{self.name} ({self.gender}), {self.age} years old"
    def __repr__(self):
        """Representation of an object"""
        return f"Person('{self.name}'), Gender ('{self.gender}'), Age ('{self.age}')"


class Family(object):
    """Represents a family class"""
    
    def __init__(self, members):
        self.members = members

    def __str__(self):
        result = "Family members:\n"
        for person in self.members:
            result += f"- {person}\n"
        return result

    def __repr__(self):
        result = "Family members:\n"
        for person in self.members:
            result += f"Person('{person.name}'), Gender ('{person.gender}'), Age ('{person.age}')\n"
        return result


if __name__ == "__main__":
    John = Person("John", "Male", 30)
    Jane = Person("Jane", "Female", 25)
    Bob = Person("Bob", "Male", 5)
    family = Family([John, Jane, Bob])

    print("__str__ representantion")
    print(family)
    print()
    print("__repr__ representantion")
    print(repr(family))
