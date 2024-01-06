#!/usr/bin/python3

# finally clause is intendend to define
# clean-up actions that must be executed
# under all circumstances
try:
    raise KeyboardInterrupt
finally:
    print('Goodbye, World')
