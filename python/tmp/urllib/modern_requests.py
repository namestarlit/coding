#!/usr/bin/python3
"""Demonstration of requests module"""

import requests


# using HTTP GET method.
r = requests.get('https://www.namestarlit.tech')
print(r.status_code)
header = r.headers
for key, value in header.items():
    # print(f"{key}: {value}")
    print("{}: {}".format(key, value))
