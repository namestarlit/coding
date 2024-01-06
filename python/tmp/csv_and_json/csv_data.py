#!/usr/bin/python3
"""
csv.py

Reading data from a csv fille.
"""

import csv


# Open the csv file
exfile = open('example.csv')

# Pass it to Reader object
exfile_data = csv.reader(exfile)

# Read Data using a for loop
for row in exfile_data:
    print(' Row #' + str(exfile_data.line_num) + ' ' + str(row))
