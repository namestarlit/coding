#!/usr/bin/python3

def this_fails():
    return ( 1 / 0)

# try also checks for exceptions inside functions
# called within it
try:
    this_fails()
except ZeroDivisionError as err:
    print("Handling run-time error: ", err)
