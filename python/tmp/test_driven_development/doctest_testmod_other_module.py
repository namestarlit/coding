#!/usr/bin/python3
"""
Running tests from other module.
"""

import doctest_simple


if __name__ == "__main__":
    import doctest
    doctest.testmod(doctest_simple)
