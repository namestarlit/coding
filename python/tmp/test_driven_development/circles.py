#!/usr/bin/python3
"""
A module to calculate the area of a circle.
"""

from math import pi


def circle_area(r):
    if r < 0:
        raise ValueError("radius can not be a negative number.")

    if type(r) not in [int, float]:
        raise TypeError("The radius must be a non-negative real number.")

    return pi * (r ** 2)

if __name__ == "__main__":
    # Test function
    radii = [2, 0, -3, 2 + 5j, True, "radius"]
    message = "Area of circles with r = {radius} is {area}."

    for r in radii:
        A = circle_area(r)
        print(message.format(radius=r, area=A))
