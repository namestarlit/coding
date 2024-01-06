#!/usr/bin/python3

# The except clause may specify a variable
# after the exception name
try:
    raise Exception('spam', 'eggs') # Exception's arguments
except Exception as inst:
    print(type(inst))   # the exception type
    print(inst.args)    # arguments stored in .args
    print(inst)         # __str__ allows args to be printed
                        # direct but may be overriden in
                        # exception subclass
    x, y = inst.args    # unpack args
    print('x = ', x)
    print('y = ', y)
