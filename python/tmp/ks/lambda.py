#/usr/bin/python3

numbers = [1, 2, 3, 4, 5]

# lambda and map functions
squared_numbers = list(map(lambda x: x ** 2, numbers))
print(squared_numbers)

def square_root(y):
    """Computes square root of a number"""
    return (y ** (1/2))

# pass map function to list constructor
square_root = list(map(square_root, numbers))
print(square_root)

# decrement numbers
decrement  = list(map(lambda x: (x - 1), numbers))
print(decrement)
