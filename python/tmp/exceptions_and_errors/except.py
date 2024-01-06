#!/usr/bin/python3

# A single try statment can have more than
# one exception handlers.
try:
    pass
# They are parenthesized in a tuple
# and only one handler will be executed
except(RuntimeError, TypeError, NameError):
    pass
