#!/usr/bin/python3

# 'from' statement is used to indicate
# an exception is direct consequence
def func():
    raise ConnectionError

try:
    func()
except ConnectionError as exc:
    raise RuntimeError('Failed to open database') from exc
