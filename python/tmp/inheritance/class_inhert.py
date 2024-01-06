#!/usr/bin/python3

"""A program that demonstrates inheritance.

Base or super class. Not object in bracket.
(Generally, object is made ancestor of all classes)
In Python3.x "class Person" is
equivalent to "class Person(object)"

"""

class Person(object):
    """defines a person class."""

    def __init__(self, name):
        self.name = name
    
    @property
    def name(self):
        return self.__name

    @name.setter
    def name(self, name):
        self.__name = name

    def isEmployee(self):
        return False


class Employee(Person):
    """defines a subclass Employee."""

    def isEmployee(self):
        return True


emp = Person("Person")
print(emp.name, emp.isEmployee())

emp = Employee("Driver")
print(emp.name, emp.isEmployee())
