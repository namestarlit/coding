#!/usr/bin/python3

# You can disable automatic error chaining
# using 'from None'
try:
    open('database.sqlite')
except OSError:
    raise RuntimeError from None
