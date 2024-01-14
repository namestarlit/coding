#!/usr/bin/env python3
"""Logging accross modules"""
import logging
import mylib


def main():
    """main function"""
    logging.basicConfig(filename="myapp.log", level=logging.INFO)
    logging.info("started...")
    mylib.do_something()
    logging.info("Finished")


if __name__ == "__main__":
    main()
