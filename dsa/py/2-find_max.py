#!/usr/bin/env python3
"""Find the maximum integer value in a list"""


def find_max(numbers: list[int]) -> int:
    max_num = 0
    for i in range(len(numbers)):
        if max_num < numbers[i]:
            max_num = numbers[i]

    return max_num


if __name__ == "__main__":
    numbers = [2, 3, 8, 9, 12, 8]

    max_num = find_max(numbers)
    print(max_num)
