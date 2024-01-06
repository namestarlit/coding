#!/usr/bin/python3

class Calculator(object):
    """A Calculator class"""

    @staticmethod       # a function that belongs to Calculator class
    def add(x, y):
        return (x + y)


result = Calculator.add(2, 3)
print(result)
