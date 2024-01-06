#!/usr/bin/python3

class Some(object):

    def __init__(self, x):
        self.set_x(x)

    def get_x(self):
        return (self.__x)

    def set_x(self, x):
        if x < 0:
            self.__x = 0
        elif x > 1000:
            self.__x = 1000
        else:
            self.__x = x


some = Some(10)
print(some.get_x())
see = Some(-20)
print(see.get_x())
saw = Some(12000)
print(saw.get_x())
