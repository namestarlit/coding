#!/usr/bin/python3

numbers = [1, 4, 9, 16, 25]

# using map with built-in function
squared_numbers = map(pow, numbers, [2] * len(numbers))
print(list(squared_numbers))

# passing multiple iterables to map() function
multipliers = [10, 20, 30, 40, 50]
result = list(map(lambda x, y: x * y, numbers, multipliers))
print(result)

names = ['Alice', 'Bob', 'Charlie', 'David', 'Eva']

# using filter() with built-in function
short_names = filter(lambda name: len(name) < 5, names)
print(list(short_names))
