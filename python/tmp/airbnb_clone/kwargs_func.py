#!/usr/bin/python3
"""
calling a function using **kwargs.
"""


def some_kwargs(kwarg_1, kwarg_2, kwarg_3):
    print("kwarg_1:", kwarg_1)
    print("kwarg_2:", kwarg_2)
    print("kwarg_3:", kwarg_3)

if __name__ == "__main__":
    kwargs = {"kwarg_1": "val", "kwarg_2": "Haper", "kwarg_3": "Remy"}
    some_kwargs(**kwargs)
