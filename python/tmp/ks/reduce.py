#!/usr/bin/python3

# import reduce from function tools module
from functools import reduce


def add(x, y):
    """Adds two numbers"""
    return (x + y)

numbers = [1, 2, 3, 4, 5]

# use reduce function to add all the numbers in a list
sum_of_numbers = reduce(add, numbers)
print(sum_of_numbers)

# compute ratio of each element
ration = map(lambda x, y: x / y, numbers, [reduce(add, numbers)] * len(numbers))
print(list(ration))
print(add.__doc__)
