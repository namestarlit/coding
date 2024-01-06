#!/usr/bin/python3

class Robot(object):

    def __init__(self, name=None, built_year=2000):
        self.__name = name
        self.__built_year = built_year

    def say_hi(self):
        if self.__name:
            print("Hi, I am " + self.__name)
        else:
            print("Hi, I am a robot without a name")

    def set_name(self, name):
        self.__name = name

    def get_name(self):
        return (self.__name)

    def set_builtyear(self, built_year):
        self.__built_year = built_year

    def get_builtyear(self):
        return (self.__built_year)

    def __repr__(self):
        return ("Robot ('" + self.__name + ", " + str(self.__built_year) + ")")

    def __str__(self):
        return ("Name: " + self.__name + ", Built Year: " + str(self.__built_year))


if __name__ == "__main__":
    x = Robot("Marvin", 1997)
    y = Robot("Caliban", 1943)

    for rob in [x, y]:
        rob.say_hi()
        
        if rob.get_name() == "Caliban":
            rob.set_builtyear(1993)
        
        print("I was built in the year " + str(rob.get_builtyear()) + "!")
