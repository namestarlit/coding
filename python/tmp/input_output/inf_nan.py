#!/usr/bin/python3

"""
Neither of these raises an exception,
but the results are not valid JSON.

"""

import json


# When Enconding/Serializing
print(json.dumps(float('-inf')))
print(json.dumps(float('nan')))

# When Decoding/Deserializing
print(json.loads('-Infinity'))
print(json.loads('NaN'))

weird_json = '{"x": 1, "x": 2, "x": 3}'
print(json.loads(weird_json))   # this prints only the last key-value
