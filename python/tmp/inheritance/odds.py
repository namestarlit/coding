#!/usr/bin/python3

from dataclasses import dataclass

@dataclass
class Employee(object):
    """defines a data class."""
    name: str
    dept: str
    salary: int

ID200 = Employee("John", "Computer Lab", 20000)

print("Employee ID200:")
print(f"Name: {ID200.name}")
print(f"Department: {ID200.dept}")
print(f"Salary: {ID200.salary}")

