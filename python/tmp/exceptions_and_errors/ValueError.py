#!/usr/bin/python3

while True:
    try:
        x = int(input("Please enter the number: "))
        break
    except ValueError:
        print(f"Oops! That was no valid number. Try again ...")
