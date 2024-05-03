#!/usr/bin/python3
"""
tab_cs.py

Writing to a tab separated value (tsv) file using delimiter
and lineterminator keyword arguments to writer() method.
"""

import csv


with open("output.tsv", "w", newline="") as file:
    # Create Writer object specifying delimiter and lineterminator.
    w_file = csv.writer(file, delimiter="\t", lineterminator="\n")

    # Write to a tsv file.
    w_file.writerow(["Asnath", "Female", "Beautiful", "My babe"])
    w_file.writerow(["Genevieve", "Female", "Smart", "My daughter"])
    w_file.writerow(["Maryciana", "Female", "Loving", "My mother"])
    w_file.writerow(["Vivian", "Female", "Humble", "My sister"])
    w_file.writerow(["Eddy", "Male", "Funny", "My friend"])
    w_file.writerow(["Rogath", "Male", "Solid", "My best friend"])
    w_file.writerow(["Peter", "Male", "Helping", "My uncle"])
