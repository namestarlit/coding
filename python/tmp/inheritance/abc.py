#!/usr/bin/python3

class A(object):
    
    def __init__(self, name="abc"):
        self.name = name


class B(A):
    
    def __init__(self, name, roll):
        self.roll = roll
        self.name = name

        A.__init__(self, name)

obj = B('Paul John', 23)
print(obj.name, obj.roll)
