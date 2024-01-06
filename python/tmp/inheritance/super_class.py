#!/usr/bin/python3

"""Python codde to demonstrate
how parent constructors are called.
"""

# Parent class
class Person(object):
    """Defines Person class."""

    def __init__(self, name, idnumber):
        self.name = name
        self.idnumber = idnumber

    def display(self):
        print(self.name)
        print(self.idnumber)


# Child Class
class Employee(Person):
    """Defines Employee subclass of Person."""

    def __init__(self, name, idnumber, salary, post):
        self.salary = salary
        self.post = post

        # invoking the __init__ of the parent class
        Person.__init__(self, name, idnumber)

    def display(self):
        print(self.name)
        print(self.idnumber)

        if issubclass(Employee, Person):
            print(self.salary)
            print(self.post)


# creation of an object variable or instance
a = Employee('Rahul', 886012, 200000, "Intern")
b = Person('Kika', 886013)

# calling a function of the class Person using its instance
a.display()
print()
b.display()
