#!/usr/bin/env python3
"""Log formatting"""
import logging


logging.basicConfig(format="%(asctime)s %(message)s", datefmt="%m/%d/%Y %I:%M:%S %p")
logging.warning("is when this event was logged.")
