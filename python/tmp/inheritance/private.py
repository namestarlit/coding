#!/usr/bin/python3

"""Python program to demonstrate private members
of the parent class.

"""

class C(object):

    def __init__(self):
        self.c = 21
        self.__d = 42 #. int: d is private variable


class D(C):

    def __init__(self):
        self.e = 84
        C.__init__(self)

# use @property and @attr_name.setter to access private attributes
    @property
    def d(self):
        return self.__d

    @d.setter
    def d(self, value):
        self.__d = value


obj = D()
obj.d = 35
print(obj.c)
print(obj.e)
# This will raise an AttributeError exception
# because if you don't use getters and setters
# to access attribute d defined in class C
print(obj.d)
