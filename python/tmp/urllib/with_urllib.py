#!/usr/bin/python3
"""simple use of urllib.request module"""

from urllib import request


with request.urlopen('http://localhost/') as response:
    html = response.read()
    print(html.decode('utf-8'))
