#!/usr/bin/python3
"""
csv_to_python.py

Converts CSV data to Python data type.
"""

import csv


with open("data-text.csv") as csv_file:
    # Creat Reader object
    csv_data = csv.reader(csv_file)

    for row in csv_data:
        if csv_data.line_num <= 5:
            print(str(row) + "\n")
        else:
            break
