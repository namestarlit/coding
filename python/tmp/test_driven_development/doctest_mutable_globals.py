#!/usr/bin/python3
"""
If contents of mutable variables defined in the module
are changed, tests can interfere with each other.
"""


_module_data = {}

class TestGlobals(object):

    def one(self):
        """
        >>> TestGlobals().one()
        >>> 'var' in _module_data
        True
        """
        _module_data['var'] = 'value'

    def two(self):
        """
        >>> 'var' in _module_data
        False
        """

# The module variable _module_data is changed by the tests for one(),
# causing the test for two() to fail.
