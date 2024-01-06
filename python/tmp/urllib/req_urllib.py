#!/usr/bin/python3
"""Sending requests to the URL"""

from urllib import request


req = request.Request('http://localhost/')

with request.urlopen(req) as response:
    page = response.read()
    print(page.decode('utf-8'))
