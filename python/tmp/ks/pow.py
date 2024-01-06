#!/usr/bin/python3

numbers = [1, 2, 3, 4, 5]

# numbers raised power 3
result = map(pow, numbers, [3] * len(numbers))
print(list(result))
