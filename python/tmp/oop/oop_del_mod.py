#!/usr/bin/python3

class Robot(object):

    def __init__(self, name):
        self.name = name
        print(self.name + " has been creted!")

    def __del__(self):
        print(self.name + " says bye-bye.")


if __name__ == "__main__":
    x = Robot('Tik-Tok')
    y = Robot('Jenkins')
    z = x

    print("Deleting x")
    del x
    print("Deleting z")
    del z
    del y
