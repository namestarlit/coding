#!/usr/bin/python3
"""
printing *kwargs.
"""


def print_kwargs(**kwargs):
    print(kwargs)


if __name__ == "__main__":
    print_kwargs(kwargs_1="shark", kwargs_2=4.5, kwargs_3=True)
