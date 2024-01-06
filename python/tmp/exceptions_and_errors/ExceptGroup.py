#!/usr/bin/python3

def f():
    excs = [OSError('error 1'), SystemError('error 2')]
    raise ExceptionGroup('there were problems', excs)

try:
    f()
except Exception as e:
    print(f'caught {type(e)}: {e}')
