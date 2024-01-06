#!/usr/bin/python3

class Robot(object):

    def __init__(self, name, built_year):
        self.name = name
        self.built_year = built_year

    def __repr__(self):
        return ("Robot ('" + self.name + "'," + str(self.built_year) + ")")
    def __str__(self):
        return ("Name: " + self.name + ", Built Year: " + str(self.built_year))


if __name__ == "__main__":
    x = Robot("Marvin", 1997)
    # x_str = str(x)            # remove the __str__ method to test the x_str functionality
    # print(x_str)
    x_repr = repr(x)
    # print("Type of x_str: ", type(x_str))
    print("Type of x_repr: ", type(x_repr))

    # new = eval(x_str)
    new = eval(x_repr)
    print(new)
    print("Type of new: ", type(new))
