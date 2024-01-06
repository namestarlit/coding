#!/usr/bin/python3

class MyClass(object):
    pass


def unpredictable(obj):
    """Returns a new list containing obj.

    >>> unpredictable(MyClass())
    [<doctest_unpredictable.MyClass object at 0x10055A2D0>]
    """
    return [obj]
