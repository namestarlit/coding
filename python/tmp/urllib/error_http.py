#!/usr/bin/python3
"""Handling Errors"""

import urllib.request
import urllib.error


req = urllib.request.Request('http://localhost/fish.html')
try:
    urllib.request.urlopen(req)
except urllib.error.HTTPError as e:
    print(e.code)
    print(e.read().decode('utf-8'))
