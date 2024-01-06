#!/usr/bin/python3

class MyClass(object):
    """MyClass class"""
    count = 0

    def __init__(self, classes):
        self.classes = classes
        # increment class count
        MyClass.count += 1

    @classmethod        # class method decorator,the method belongs to MyClass class
    def get_count(cls):
        return cls.count

clx = MyClass("clx")
cly = MyClass("cly")

print(MyClass.count)
