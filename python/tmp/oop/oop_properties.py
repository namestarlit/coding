#!/usr/bin/python3

class Some(object):

    def __init__(self, x):
        self.x = x

    @property
    def x(self):
        return (self.__x)

    @x.setter
    def x(self, x):
        if x < 0:
            self.__x = 0
        elif x > 1000:
            self.__x = 1000
        else:
            self.__x = x


some = Some(10)
print(some.x)
see = Some(-20)
print(see.x)
saw = Some(12000)
print(saw.x)
