#!/usr/bin/python3
"""
remove_csv_header.py

Removes the header row of CSV files.
"""

import csv
import os

os.makedirs("headerRemoved", exist_ok=True)

# Loop through every file in the current working directory
for csv_filename in os.listdir("."):
    if not csv_filename.endswith(".csv"):
        continue  # skip non-csv files
    print("Removing header from" + csv_filename + "...")

    # Read the CSV file in (skipping first row)
    csv_rows = []

    # Open the CSV file
    with open(csv_filename) as csv_obj:
        # Create Reader object
        csv_reader = csv.reader(csv_obj)

        # Loop skipping the first line.
        for row in csv_reader:
            if csv_reader.line_num == 1:
                continue  # skip first row
            # append row to a list
            csv_rows.append(row)

    # Write out the CSV file.
    with open(os.path.join("headerRemoved", csv_filename), "w", newline="") as csv_obj:
        # Create Writer object.
        csv_writer = csv.writer(csv_obj)

        # Loop through the csv_rows to write.
        for row in csv_rows:
            # Write to a csv file.
            csv_writer.writerow(row)
