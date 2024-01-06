#!/usr/bin/python3

"""Python program to demonstrate super() method."""

class Person(object):
    """Defines a person class."""

    def __init__(self, name):
        self.name = name

    def __str__(self):
        return "Class: {}\nName: {}".format(type(self).__name__, self.name)


class Employee(Person):
    """Defines an Employee Sub class."""

    def __init__(self, name, salary):
        # super() to set name using Person class __init__ method
        super().__init__(name)
        self.salary = salary

    def __str__(self):
        return super().__str__() + "\nSalary: {}".format(self.salary)


if __name__ == "__main__":
    person1 = Person("Paul John")
    person2 = Employee("Asnath John", 230000)

    print(person1)
    print(person2)
