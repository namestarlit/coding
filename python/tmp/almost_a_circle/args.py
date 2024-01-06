#!/usr/bin/python3
"""
using *args in function definitions.

*args is used to send a non-keyworded variable
lenght argument list to the function.
"""


def test_var_args(f_arg, *argv):
    print("first normal arg:", f_arg)

    for arg in argv:
        print("another arg through *argv:", arg)


test_var_args("hello", "Asnath", "I am missing you")
