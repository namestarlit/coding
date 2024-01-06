#!/usr/bin/python3
"""
cal.py

A module to perform arithmetic calculations.
"""

def add(x, y):
    """Adds two numbers."""
    if (type(x) and type(y)) not in [int, float]:
        raise TypeError("x and y must be numbers.")
    return x + y

def subtract(x, y):
    """Subtracts a number from a number."""
    if (type(x) and type(y)) not in [int, float]:
        raise TypeError("x and y must be numbers.")
    return x - y

def multiply(x, y):
    """Multiplies two numbers."""
    if (type(x) and type(y)) not in [int, float]:
        raise TypeError("x and y must be numbers.")
    return x * y

def divide(x, y):
    """Divides a number by a number."""
    if (type(x) and type(y)) not in [int, float]:
        raise TypeError("x and y must be numbers.")
    if y == 0:
        raise ZeroDivisionError("You can't divide by 0.")
    return x / y
