#!/usr/bin/env python3
"""A fizzbuzz algorithm implementation"""
import sys

def fizzbuzz(count):
    """fizzbuzz implementantion"""
    if count <= 0:
        return

    for num in range(1, count + 1):
        if num % 15 == 0:
            print("FizzBuzz")
        elif num % 3 == 0:
            print("Fizz")
        elif num % 5 == 0:
            print("Buzz")
        else:
            print(num)


if __name__ == "__main__":
    if len(sys.argv) == 2:
        try:
            count = int(sys.argv[1])
        except Exception as e:
            print("Count must be a number")
            exit(1)
    else:
        print(f"Usage: ./fizzbuzz.py count")
        exit(1)

    fizzbuzz(count)
