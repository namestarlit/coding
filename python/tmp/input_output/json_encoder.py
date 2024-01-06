#!/usr/bin/python3

import json
from io import StringIO

# Encoding basic Python object hierarchies.
tmp = json.dumps(['foo', {'bar': ('baz', None, 1.0, 2)}])
print(tmp)

tmp = json.dumps("\"foo\bar")
print(tmp)

tmp = json.dumps('\u1234')
print(tmp)

tmp = json.dumps('\\')
print(tmp)

tmp = json.dumps({"c": 0, "b": 0, "a": 0}, sort_keys=True)
print(tmp)

io = StringIO()
tmp = json.dump(['Streaming API'], io)
print(io.getvalue())


# Compact encoding
tmp = json.dumps([1, 2, 3, {'4': 5, '6': 7}], separators=(',', ':'))
print(tmp)


# Pretty printing
tmp = json.dumps({'4': 5, '6': 7}, sort_keys=True, indent=4)
print(tmp)
