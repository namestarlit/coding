#!/usr/bin/python3
"""Enconding arguments in the URL"""

from urllib import parse
from urllib import request


query_args = {'q': 'query string', 'foo': 'bar'}
encoded_args = parse.urlencode(query_args)
print('Encoded:', encoded_args)
print()

url = 'http://localhost/?' + encoded_args
print(request.urlopen(url).read().decode('utf-8'))

response = request.urlopen(url)
print('HEADERS:')
print(response.info())
