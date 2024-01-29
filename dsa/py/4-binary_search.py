#!/usr/bin/env python3
"""A binary search algorithm"""


def binary_search(dataset: list[int], item: int) -> int:
    """Binary search algorithm implementantion"""
    # initiate low and high indexes of the dataset
    low = 0
    high = len(dataset) - 1  # minus 1 because the list is 0 base indexed

    while low <= high:
        mid = (low + high) // 2

        if dataset[mid] == item:
            return mid
        elif dataset[mid] > item:
            high = mid - 1
        else:
            low = mid + 1

    return None


if __name__ == "__main__":
    num_list = [1, 2, 3, 4, 5, 6]

    num_6 = binary_search(num_list, 6)
    print(num_6)
    print(num_list[num_6])
