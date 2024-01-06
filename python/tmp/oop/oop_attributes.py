#!/usr/bin/python3

from oop_attributes_test import Attribute


x = Attribute()

print(x.pub)
x.pub = x.pub + " and my value can be changed"
print(x.pub)
print()

# This can be changed under conditions
print(x._prot)
print()
# This can only be changed from within the class itself
print(x.__priv)
