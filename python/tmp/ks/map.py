#!/usr/bin/python3

def square(x):
    """Computes square of a number"""
    return (x ** 2)

numbers = [1, 2, 3, 4, ]

# map function to numbers
squared_numbers = map(square, numbers)
# prints actual values
print(list(squared_numbers))
# prints map object address in memory
print(squared_numbers)

# __repr__ function
square_repr = repr(squared_numbers)
# prints address of map object
print(square_repr)
