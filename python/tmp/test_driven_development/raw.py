#!/usr/bin/python3
"""
raw.py

This program demonstrates how to write backslashes
in a docstring so they are not interpreted.
"""


def f(x):
    r'''Backslashes in raw docstring: m\n'''
    return None

print(f.__doc__)

# alternatively you can use double backslashes \\
def x(f):
    '''Backslashes in raw docstring: m\\n'''
    return None

print(x.__doc__)
