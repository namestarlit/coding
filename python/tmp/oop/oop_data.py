#!/usr/bin/python3

class Robot(object):

    def __init__(self,
                 name=None,
                 built_year=None):
        self.name = name
        self.built_year = built_year

    def say_hi(self):
        if self.name:
            print("Hi, I am " + str(self.name))
        else:
            print("Hi, I am a robot without a name.")
        if self.built_year:
            print("I was built in " + str(self.built_year))
        else:
            print("It is not known when I was created.")

    def set_name(self, name):
        self.name = name

    def get_name(self):
        return (self.name)

    def set_builtyear(self, builtyear):
        self.built_year = builtyear

    def get_builtyear(self):
        return (self.built_year)

x = Robot()
x.set_name("Hola")
x.set_builtyear("1999")
x.say_hi()
print()

y = Robot()
y.set_name(x.get_name())
y.set_builtyear(x.get_builtyear())

z = Robot("Hello", "1789")
z.say_hi()
print()

w = Robot()
w.set_name("Mambo")
w.set_builtyear("2008")
w.say_hi()
print()

print(y.get_name())
print(y.get_builtyear())
