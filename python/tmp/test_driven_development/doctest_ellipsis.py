#!/usr/bin/python3
"""
When the tests include values that are likely to change
unpredictable ways, and if the actual value is not
important to the test results, use the ``ELLIPSIS`` option to tell
``doctest`` to ignore portions of the verification value.
"""


class MyClass(object):
    pass


def unpredictable(obj):
    """Returns a new list containing obj.

    >>> unpredictable(MyClass()) # doctest: +ELLIPSIS
    [<doctest_ellipsis.MyClass object at 0x...>]
    """
    return [obj]
