#!/usr/bin/python3
"""
Parameters order:
    1. Formal positional arguments
    2. *args
    3. Keyword arguments
    4. **kwargs
"""

def example(arg_1, arg_2, *args, **kwargs):
    pass

def example_2(arg_1, arg_2, *args, kw_1="shark", kw_2="blobfish", **kwargs):
    pass


if __name__ == '__main__':
    print("Open me to see examples of parameters/arguments order in a function.")
