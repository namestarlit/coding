#!/usr/bin/python3
"""
lec8.py

Example module to explain time compleity and code
efficiency analysis.
"""


def exp1(a, b):
    """computes iterative exponent b times.
    Args:
        a (int): base number
        b (int): exponent integer

    Returns:
        int: `a` power `b`
    """
    ans = 1
    while (b > 0):
        ans *= a
        b -= 1
    return (ans)

def exp2(a, b):
    if b == 1:
        return a
    else:
        return (a * exp2(a, b - 1))

def exp3(a, b):
    if b == 1:
        return a
    if (b % 2) * 2 == b:
        return exp3(a * a, b / 2)
    else:
        return a * exp3(a, b - 1) 

def g(n, m):
    x = 0
    for i in range(n):
        for j in range(m):
            x += 1
    return x
