#!/usr/bin/python3

class Person(object):
    """Person class"""
    def __init__(self, name=None, age=None):
        self.name = name
        self.age = age

    def __str__(self):
        return f"{self.__name} {self.__age} years old"

    def __repr__(self):
        return f"Person('{self.__name}', {self.__age})"

    @property
    def name(self):
        """returns person's name"""
        return self.__name

    @name.setter
    def name(self, name):
        """sets a person's name"""
        # check if name is string
        if not isinstance(name, str):
            raise TypeError('Name must be a string')
        self.__name = name

    @property
    def age(self):
        """returns person's age"""
        return self.__age

    @age.setter
    def age(self, age):
        """sets person's age"""
        if not isinstance(age, int):
            raise TypeError("Age must be an integer")
        self.__age = age

    @property
    def isadult(self):
        if self.__age and self.__age >= 18:
            return True
        else:
            return False


person = Person('Eddy', 20)
print(person)
print(repr(person))
print()
print(person.name)
print(person.age)
print(person.isadult)

# change the name and age using the setters
person.name = "Bob"
person.age = 17

print(person.name)
print(person.age)
print(person.isadult)
print()

# try to set the name to an invalid value
try:
    person.name = 2343
except TypeError as e:
    print(e)

# try to set age to an invalid value
try:
    person.age = "30"
except TypeError as e:
    print(e)
