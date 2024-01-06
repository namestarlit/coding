#!/usr/bin/python3
"""HTTP GET using urllib.request module"""

from urllib import request


response = request.urlopen('https://www.namestarlit.tech/')
print('RESPONSE:', response)
print('URL :', response.geturl())
print()

headers = response.info()
print('DATE:', headers['date'])
print('HEADERS:')
print('---' * 10)
print(headers)
print('---' * 10)
print()

data = response.read().decode('utf-8')
print('LENGTH:', len(data))
print('DATA:')
print('---' * 10)
print(data)
