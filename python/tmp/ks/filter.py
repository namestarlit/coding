#!/usr/bin/python3

def is_even(x):
    """checks if a number is even or not"""
    return (x % 2 == 0)

numbers = [1, 2, 3, 4, 5]

# filter function
even_numbers = list(filter(is_even, numbers))
print(even_numbers)
