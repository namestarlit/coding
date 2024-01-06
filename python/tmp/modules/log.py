#!/usr/bin/env python3
"""Logging module"""
import logging


# Set Logging level and FileHandler with filename
logging.basicConfig(filename="example.log", level=logging.WARNING)

# Log level defaults to warning; debug and info won't be printed
log = logging.getLogger()

log.debug('This is to help with debugging')
log.info('This is just for information')
log.warning('This is a warning!')
log.error('This should be used with something unexpected')
log.critical('Something serious')
