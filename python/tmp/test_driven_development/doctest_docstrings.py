#!/usr/bin/python3
"""Test can appear in any docstring within the module.

Module-level tests cross class and function boundaries.
Docstrings at the module, class, and function levels can also contain tests.

>>> A('a') == B('b')
False
"""


class A(object):
    """Simple class.
    >>> A('instance_name').name
    'instance_name'
    """

    def __init__(self, name):
        self.name = name

    def method(self):
        """Returns an unusual value.

        >>> A('name').method()
        'eman'
        """
        return ''.join(reversed(self.name))


class B(A):
    """Another simple class.

    >>> B('different_name').name
    'different_name'
    """
