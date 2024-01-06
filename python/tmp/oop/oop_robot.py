#!/usr/bin/python3

class Robot(object):
    pass

if __name__ == "__main__":
    x = Robot()
    y = Robot()

    y2 = y

    print(y2 == y)
    print(y == x)
    print()

    # Creating object attributes using dot notation
    x.name = "Marvin"
    x.built_year = "1997"
    y.name = "Cypher"
    y.built_year = "1976"

    print(x.name, " ", x.built_year)
    print(y.name, " ", y.built_year)
    print()
    
    # instances posses dictionaries which they use
    # to store their attributes in a __dict__
    print(x.__dict__)
    print(y.__dict__)
    print()

    # class variables
    Robot.brand = "kuka"
    print(x.brand)
    print(y.brand)
    print()

    # assign instance variable with a class var name
    x.brand = "suki"    # This hides the brand class variable
    print(x.brand)
    print(y.brand)
    print(Robot.brand)
    print()

    # assign a robot brand new name
    Robot.brand = "Haki"
    print(Robot.brand)
    print(x.brand)
    print(y.brand)
    print()

    # check the __dict__
    print(x.__dict__)
    print(y.__dict__)
    print(Robot.__dict__)
    print()

    # when you access y.brand, Python checks first
    # if brand is an attribute to y in the y.__dict__
    # if not then it checks on the Robot.__dict__
    # if it does not exist anywhere, you get an AttributeError

    x.energy = getattr(x, 'energy', 100)    # This solves the AttributeError
    print(x.energy)                         # This will raise an AttributeError
