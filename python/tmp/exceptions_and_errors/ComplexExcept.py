#!/usr/bin/python3

def divide(x, y):
    try:
        result = x / y
    except ZeroDivisionError:
        print("Division by zero!")
    else:
        print("result is", result)
    finally:
        print("Executing finally clause")

x = int(input("Enter the first number: "))
y = int(input("Enter the second numberd: "))

print("calling divide(x, y)\n")
divide(x, y)
