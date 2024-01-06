#!/usr/bin/python3
"""
Using *args and **kwargs to call a function.

You can use *args or **kwargs to pass arguments
to this little function.

usage of both of them, order:
    some_func(fargs, *args, **kwargs)
"""


def test_args_kwargs(arg1, arg2, arg3):
    print("arg1:", arg1)
    print("arg2:", arg2)
    print("arg3:", arg3)


if __name__ == "__main__":
    # Using *args
    args = ("two", 3, 5)
    # pass the tuple into the function by preceeding
    # the variable name with * (asterisk)
    test_args_kwargs(*args)
    print()

    # using **kwargs
    kwargs = {"arg3": 3, "arg2": "two", "arg1": 5}
    test_args_kwargs(**kwargs)
