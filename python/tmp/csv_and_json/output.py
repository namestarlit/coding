#!/usr/bin/python3
"""
output.py

Write a csv file using the Writer object of csv module.
"""

import csv


with open('output.csv', 'w', newline='') as out_file:
    # Create Writer object.
    out_writer = csv.writer(out_file)

    # Write to the file using writerow() function.
    out_writer.writerow(['spam', 'eggs', 'bacon', 'ham'])
    out_writer.writerow(['Hello, World!', 'eggs', 'bacon', 'ham'])
    out_writer.writerow([1, 2, 3.141592, 4])
    out_writer.writerow(['Asnath', 'Female', '22nd March', 'My babe'])
