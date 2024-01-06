#!/usr/bin/python3

def hi(obj):
    print("H, I am " + obj.name)

class Robot(object):
    pass

x = Robot()
x.name = "Marvin"

hi(x)

# bound function hi to a class attribute
class Robot(object):
    say_hi = hi

Robot.say_hi(x)
