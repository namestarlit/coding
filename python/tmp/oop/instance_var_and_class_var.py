#!/usr/bin/python3

class MyClass(object):
    # class variable defined outside any method
    class_var = 0

    def __init__(self, instance_var):
        # instance variable defined inside __init__ method
        self.instance_var = instance_var

# use class name to access class variable
MyClass.class_var = 10
print(f"{MyClass.class_var} is in a class variable")

# use instance name to access instance variable
obj = MyClass("This is an instance variable")
print(obj.instance_var)
