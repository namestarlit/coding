#!/usr/bin/python3

class Person(object):
    """Defines a person."""

    def __init__(self, name=None, age=None, height=None):
        """Initializes an instance.

        Args:
            name = name of the person
            age = age of the person

        """

        self.name = name
        self.age = age
        self.height = height


class Male(Person):
    """Defines an inheritence of a person."""
    gender = "Male"


px = Male("Paul John", 22, 180.5)

"""isisntance() method.

Use isinstance() to check an isntance's type: isinstance(obj, int)
will be true only if obj.__class__ is int or some class derived from int.

issubclass() method.

use issubclass() to check class inheritance: issubclass(bool, int) is ``True``
since bool is a subclass of int. However, issubclass(float, int) is ``False``
since float is not a subclass of int.

"""

print("isisntance(px.age, int): {}".format(isinstance(px.age, int)))
print("isisntace(px.height, float): {}".format(isinstance(px.height, float)))
print("isinstance(px.name, str): {}".format(isinstance(px.name, str)))
print("isintance(float, int): {}".format(isinstance(float, int)))
print("isinstance(bool, int): {}".format(isinstance(bool, int)))
print("issubclass(float, int): {}".format(issubclass(float, int)))
print("issubclass(bool, int): {}".format(issubclass(bool, int)))
print("issubclass(Male, Person): {}".format(issubclass(Male, Person)))
