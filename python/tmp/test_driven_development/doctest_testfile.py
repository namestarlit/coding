#!/usr/bin/python3
"""
Running doctest tests by file using
``testfile()`` module.
"""

import doctest

if __name__ == '__main__':
    doctest.testfile('doctest_in_help.txt')
