#!/usr/bin/python3

class B(Exception):
    pass


class C(B):
    pass


class D(C):
    pass


# the following code will print B, C, D in that order
# because an except statement is compatible with an
# exception if it is the same class or a base class
# not the other way around
for cls in [B, C, D]:
    try:
        raise cls()
    except D:
        print("D")
    except C:
        print("C")
    except B:
        print("B")
print()

# This will print B, B, B
# the first matching except clause is triggered.
for cls in [B, C, D]:
    try:
        raise cls()
    except B:
        print("B")
    except C:
        print("C")
    except D:
        print("D")
