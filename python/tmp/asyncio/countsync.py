#!/usr/bin/env python3
"""A syncronous count program"""
import time


def count():
    """a sync count function"""
    print("one")
    time.sleep(1)
    print("two")

def main():
    """main function"""
    for _ in range(3):
        count()


if __name__ == "__main__":
    s = time.perf_counter()
    main()
    elapsed = time.perf_counter() - s
    print(f"{__file__} executed in {elapsed:0.2f} seconds.")
