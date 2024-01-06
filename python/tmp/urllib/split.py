#!/usr/bin/python3
"""urlsplit() to split a url"""

from urllib.parse import urlsplit


url = 'http://user:pwd@NetLoc:80/p1;para/p2;para?query=arg#frag'
parsed = urlsplit(url)
print(parsed)
print()

# Print parts of the url
print('scheme :', parsed.scheme)
print('netloc :', parsed.netloc)
print('path:', parsed.path)
print('query:', parsed.query)
print('fragment:', parsed.fragment)
print('username:', parsed.username)
print('password:', parsed.password)
print('hostname:', parsed.hostname)
print('port:', parsed.port)
