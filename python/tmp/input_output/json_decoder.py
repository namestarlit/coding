#!/usr/bin/python3

import json
from io import StringIO
import decimal

"""
`json.load()` reads JSON data from file-like object, while
`json.loads()` parses a JSON string.

"""

# Decoding JSON
tmp = json.loads('["foo", {"bar": ["baz", null, 1.0, 2]}]')
print(tmp)

tmp = json.loads('"\\"foo\\bar"')
print(tmp)

io = StringIO('["streaming API"]')
tmp = json.load(io)
print(tmp)

# specializing JSON object decoding
def as_complex(dct):
    if '__complex__' in dct:
        return complex(dct['real'], dct['imag'])
    return dct

tmp = json.loads('{"__complex__": true, "real": 1, "imag": 2}', object_hook=as_complex)
print(tmp)

tmp = json.loads('1.1', parse_float=decimal.Decimal)
print(tmp)
