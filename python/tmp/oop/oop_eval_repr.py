#!/usr/bin/python3

import datetime

today = datetime.datetime.now()

repr_s = repr(today)
t = eval(repr_s)
print(type(t))
