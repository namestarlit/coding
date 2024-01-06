#!/usr/bin/python3
"""Add custom header to outgoing requests"""

from urllib import request


r = request.Request('http://localhost/')
r.add_header('X-Serverd-By', 'starlit')

response = request.urlopen(r)
print(response.info())

print(response.read().decode('utf-8'))
