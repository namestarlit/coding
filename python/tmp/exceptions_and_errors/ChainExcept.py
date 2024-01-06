#!/usr/bin/python3

# unhandled exceptions inside except statement
# the exception will handled being attached to it
# and included in the error message
try:
    open("database.sqlite")
except OSError:
    raise RuntimeError("Unable to handle error")
