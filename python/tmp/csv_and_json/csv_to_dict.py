#!/usr/bin/python3
"""
csv_to_dict.py

Reads CSV file into a Python Dictionary.
"""

import csv


with open('data-text.csv') as csv_file:
    # Create DictReader object.
    csv_dict = csv.DictReader(csv_file)

    for row in csv_dict:
        if csv_dict.line_num <= 5:
            print(row)
