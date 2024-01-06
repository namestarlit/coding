#!/usr/bin/python3
"""Timeout implementation using sockets"""

import socket
from urllib import request


timeout = 10
socket.setdefaulttimeout(timeout)

req = request.Request('http://www.voidspace.org.uk')
response = request.urlopen(req)
print(response.info())
