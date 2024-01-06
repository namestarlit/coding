#!/usr/bin/python3
"""
tests.py

This demonstrates how to use +ELLIPSIS
and +IGNORE_EXCEPTION_DETAIL in test files.
"""


def divide(a, b):
    """
    This function divides two numbers and returns the result.
    
    >>> divide(10, 5)
    2.0
    >>> divide(1, 0)
    Traceback (most recent call last):
        ...
    ZeroDivisionError: division by zero
    
    >>> divide(1, 0)  # doctest: +ELLIPSIS
    Traceback (most recent call last):
        ...
    ZeroDivisionError: division by zero
    
    >>> divide(1, 0)  # doctest: +IGNORE_EXCEPTION_DETAIL
    Traceback (most recent call last):
        ...
    ZeroDivisionError: division by zero
    """
    return a / b

if __name__ == "__main__":
    import doctest
    
    doctest.testmod()
