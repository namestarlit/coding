#!/usr/bin/python3

class MyClass(object):

    class_attr = 10

    def __init__(self, instance_attr):
        self.instance_attr = instance_attr

    @classmethod
    def class_method(cls, x):
        cls.class_attr += x
        return cls.class_attr

    @staticmethod
    def static_method(x):
        return (x + 5)


obj = MyClass(20)

print(obj.instance_attr)
print(obj.class_attr)
print(MyClass.class_attr)
print()

# calling class method
print(MyClass.class_method(5))
print(obj.class_method(10))

# calling static method
print(MyClass.static_method(5))
print(obj.static_method(10))
