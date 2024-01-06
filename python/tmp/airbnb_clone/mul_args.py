#!/usr/bin/python3
"""
multiplication using *args demo.
"""


def multiply(*args):
    val = 1
    for num in args:
        val *= num
    print(val)


if __name__ == '__main__':
    multiply(4, 5)
    multiply(10, 9)
    multiply(2, 3, 9)
    multiply(20, 2, 30, 40)
