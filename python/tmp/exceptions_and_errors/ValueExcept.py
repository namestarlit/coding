#!/usr/bin/python3

# if finally clause contains a return statement
# the value from the finally clause is returned
# not the one from the try statement
def bool_return():
    try:
        return True
    finally:
        print("This is finally clause.")
        return False

bool_return()
