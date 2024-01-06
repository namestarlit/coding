#!/usr/bin/python3
"""
using **kwargs in a function.

**kwargs allows to pass keyworded variable lenght
of arguments to a function. use **kwargs if you want
to handle named arguments.
"""


def greet_me(**kwargs):
    if kwargs is not None:
        for key, value in kwargs.items():
            print("{} == {}".format(key, value))

greet_me(name="Asnath")
