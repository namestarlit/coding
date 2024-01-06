#!/usr/bin/python3

class MyClass(object):

    def __init__(self, name):
        self.name = name

    def __del__(self):
        print(f"Object {self.name} is being deleted")


# create an instance of MyClass
obj = MyClass('test')

# Delete the reference to the Object
del obj

# this will raise AttributeError
print(obj.name)
