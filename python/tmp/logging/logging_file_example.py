#!/usr/bin/env python3
"""Logging to a file"""
import logging


LOG_FILENAME =  "example.log"
logging.basicConfig(
        filename=LOG_FILENAME,
        level=logging.DEBUG,
        )

logging.debug("This message should go to the log file")

with open(LOG_FILENAME, "rt") as f:
    body = f.read()

print("FILE:")
print(body)
