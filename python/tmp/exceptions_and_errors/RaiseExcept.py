#!/usr/bin/python3

# You can explicitily raise exceptions
# using the 'raise' statement
# raise NameError("Hell")
# raise ValueError

try:
    raise NameError("Hell")
except NameError:
    print('An exception flew by!')
    raise
