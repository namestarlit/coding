#!/usr/bin/python3

"""Python program to demonstrate
Hybrid Inheritance.

"""
# This is logically a bad example

class School(object):
    def func1(self):
        print("This function is in school.")


class Student1(School):
    def func2(self):
        print("This function is in student 2.")


class Student3(Student1, School):
    def func4(self):
        print("This function is in student 3.")

obj = Student3()
obj.func1()
obj.func2()
