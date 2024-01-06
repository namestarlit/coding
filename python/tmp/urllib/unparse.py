#!/usr/bin/python3
"""geturl() method to retrive the parts of a parsed url"""

from urllib.parse import urlparse


original = 'http://netloc/path;param?query=arg#frag'
print('ORIG :', original)
parsed = urlparse(original)
print(parsed)
print('PARSED:', parsed.geturl())
