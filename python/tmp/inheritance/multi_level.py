#!/usr/bin/python3

"""A Python program to demonstrate inheritance.

Base or Super class. Note object in bracket.
(Generally, object is made ancestors of all classes)
In Python3.x "class Person" is
equivalent to "class Person(object)"

"""

class Base(object):

    def __init__(self, name):
        self.name = name

    @property
    def name(self):
        return self.__name

    @name.setter
    def name(self, name):
        if not isinstance(name, str):
            raise TypeError('name must be a string')
        self.__name = name


# Inherited or Sub Class (Note Base in Bracket)
class Child(Base):

    def __init__(self, name, age):
        Base.__init__(self, name)
        self.age = age

    @property
    def age(self):
        return self.__age

    @age.setter
    def age(self, age):
        if not isinstance(age, int):
            raise TypeError('age must be an integer')
        self.__age = age

class GrandChild(Child):

    def __init__(self, name, age, address):
        Child.__init__(self, name, age)
        self.address = address

    @property
    def address(self):
        return self.__address

    @address.setter
    def address(self, address):
        self.__address = str(address)

if __name__ == "__main__":
    g = GrandChild("Paul John", 22, "Sahwa")
    

    print(g.name)
    print(g.age)
    print(g.address)

    p = Child("Joseph John", 50)
    print(p.name)
    print(p.age)

    k = Base("John")
    print(k.name)
