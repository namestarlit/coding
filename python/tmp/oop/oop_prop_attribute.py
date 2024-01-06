#!/usr/bin/python3

class Robot(object):

    def __init__(self, name, built_year, lk=0.5, lp=0.5):
        self.name = name
        self.built_year = built_year
        self.__potential_physical = lk
        self.__potential_psychric = lp

    @property
    def condition(self):
        s = self.__potential_physical + self.__potential_psychric

        if s <= -1:
            return "I feel miserable!"
        elif s <= 0:
            return "I feel bad!"
        elif s <= 0.5:
            return "Could be worse!"
        elif s<= 1:
            return "Seems to be okay"
        else:
            return "Great!"


if __name__ == "__main__":
    x = Robot("Marvin", 1997, 0.2, 0.4)
    y = Robot("Caliba", 1993, -0.4, 0.3)

    print(x.condition)
    print(y.condition)
