#!/usr/bin/python3

class A(object):

    def __str__(self):
        return ("34")


class B(object):

    def __repr__(self):
        return ("42")


a = A()
b = B()

# print instance a of class A
# using __str__ and __repr__
# with only __str__ method defined
print(a)
print(str(a))
print(repr(a))
print()

# print instance b of class B
# using __str__ and __repr__
# with only __repr__ method defined
print(b)
print(str(b))
print(repr(b))
