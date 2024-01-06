#!/usr/bin/python3

"""A python program to demostrate inherintance."""

class Person(object):
    """defines a person class."""

    #: Constructor: __init__ method
    def __init__(self, name, id):
        self.name = name
        self.id = id

    #: Display: dipslay Person's info
    def Display(self):
        print(self.name, self.id)

emp = Person("Satyam", 102)
emp.Display()

class Emp(Person):
    """Child class inheriting properties of Person class."""
    
    def print(self):
        print("Emp class called")

emp_details = Emp("Mayank", 103)

# Calling parent class function
emp_details.Display()

# calling child class function
emp_details.print()
