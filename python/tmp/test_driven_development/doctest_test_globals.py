#!/usr/bin/python3
"""
Each test case has its own set of global values
that isolate the tests to some extent, so they
are less likely to interfere with one another.
"""


class TestGlobals(object):

    def one(self):
        """
        >>> var = 'value'
        >>> 'var' in globals()
        True
        """

    def two(self):
        """
        >>> 'var' in globals()
        False
        """
