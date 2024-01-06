#!/usr/bin/python3

class Robot(object):

    def __init__(self, name):
        print(name + " has been creted!")

    def __del__(self):
        print("Robot has been destroyed.")


if __name__ == "__main__":
    x = Robot('Tik-Tok')
    y = Robot('Jenkins')
    z = x

    print("Deleting x")
    del x
    print("Deleting z")
    del z
    del y
