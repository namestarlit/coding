#!/usr/bin/env python3
"""Logging Exceptions"""
import logging


logging.basicConfig(level=logging.WARNING)
log = logging.getLogger()

try:
    print("starting...")
    x = 1 / 0
    print(x)
except ZeroDivisionError as e:
    log.exception(f"{e}")
