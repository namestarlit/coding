#!/usr/bin/env python3
"""Logging messages"""
import logging


logging.basicConfig(format='%(asctime)s[%(levelname)s] %(funcName)s: %(message)s',
                    level=logging.DEBUG)
log = logging.getLogger(__name__)


def log_message():
    """Logs DEBUG level messages"""
    log.debug("This is to help with debugging")
    log.info("This is just for information")
    log.warning("This is a warning!")
    log.error("This should be used for something unexpected")
    log.critical("Something serious")


if __name__ == '__main__':
    log_message()
