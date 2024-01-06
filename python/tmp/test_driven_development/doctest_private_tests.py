#!/usr/bin/python3
"""
In some cases, tests should be included with the source code but not in the help text for
a module. In that scenario, the tests need to be placed somewhere other than the docstrings.
doctest looks for a module-level variable called __test__ as a way to locate other tests. The
value of __test__ should be a dictionary that maps test set names (as strings) to strings,
modules, classes, or functions.
"""

import doctest_private_tests_external

__test__ = {
    'numbers': """
>>> my_function(2, 3)
6

>>> my_function(2.0, 3)
6.0
""",

    'strings': """
>>> my_function('a', 3)
'aaa'

>>> my_function(3, 'a')
'aaa'
""",
    'external': doctest_private_tests_external,
}

def my_function(a, b):
    """Returns a * b
    """
    return a * b
