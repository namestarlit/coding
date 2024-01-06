#!/usr/bin/python3
"""
Using *args in function calls.
"""

def some_args(arg_1, arg_2, arg_3):
    print("arg_1:", arg_1)
    print("arg_2:", arg_2)
    print("arg_3:", arg_3)


args = ("Sammy", "Casey", "Alex")
some_args(*args)
print()

my_list = [2, 3]
some_args(1, *my_list)
