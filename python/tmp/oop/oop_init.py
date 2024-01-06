#!/usr/bin/python3

class Person(object):
    def __init__(self, name):
        self.name = name

    def say_hi(self):
        print(f"Hello, my name is {self.name}")


p = Person('Swaroop')
p.say_hi()
# The previous 2 lines can also be written as
Person('Starlit').say_hi()
