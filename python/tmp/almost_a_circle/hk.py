#!/usr/bin/python3
"""A script to demonstrate *args and **kwargs in python."""

def babe(name=None, *args, **kwargs):
    """Takes babes name and whater you want to pass to it.

    It prints the arguments to the screen, using a loop.
    """

    if name:
        print(f"{name} is your babe ;)")
    else:
        print(f"Looks like your babe has no name, I wonder how that is possible")

    for arg in args:
        print(arg)

    for key, value in kwargs.items():
        print(f"{key}: {value}")

if __name__ == "__main__":
    name = input(str("what's the name of your babe? "))

    babe(name, "I love her so much", "She's so beautiful", "She's a goddes", birthday="22.03", beauty="brown eyes")
