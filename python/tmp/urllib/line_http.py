#!/usr/bin/python3
"""Reading response line by line."""

from urllib import request


response = request.urlopen('http://localhost/')

for line in response:
    print(line.decode('utf-8').rstrip())
