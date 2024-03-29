#!/usr/bin/env python3
"""Logging using the rotatingfile object"""
import glob
import logging
import logging.handlers


LOG_FILENAME = "example.log"

# Set up a specific logger with the desired output level
my_logger = logging.getLogger("MyLogger")
my_logger.setLevel(logging.DEBUG)

# Add the log message handler to the logger
handler = logging.handlers.RotatingFileHandler(
    LOG_FILENAME,
    maxBytes=20,
    backupCount=5,
)
my_logger.addHandler(handler)

# Log some messages
for i in range(20):
    my_logger.debug("i = %d", i)

# See which file created.
logfiles = glob.glob("%s*" % LOG_FILENAME)
for filename in logfiles:
    print(filename)
