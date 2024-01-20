#!/usr/bin/env python3
"""Check if a list of integers contains a duplicate"""


def contains_duplicates(numbers: list[int]) -> bool:
    """Check if a list of numbers contains a duplicate number"""
    for i in range(len(numbers) - 1):
        for j in range(1, len(numbers)):
            if numbers[i] == numbers[j]:
                return True
    return False


if __name__ == "__main__":
    numbers = [2, 3, 8, 9, 12, 8]

    is_duplicated = contains_duplicates(numbers)
    print(duplicated)
