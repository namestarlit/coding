#!/usr/bin/python3
"""
json_to_dic.py

Imports data from .json file
and prints key-value pairs for each row in the JSON file
"""

import json

with open("data-text.json") as json_f:
    # Read from the json file
    data = json.load(json_f)

    for row in data:
        for key, value in row.items():
            print("{}: {}".format(key, value))
        print()
