#!/usr/bin/python3

# Working background of a for-loop

# create a string
s = "abc"

# call iter() function on it
it = iter(s)

# use next() to print the values one at a time
print(next(it))
print(next(it))
print(next(it))
print(next(it))
# this will raise StopIteration exception.
print(next(it))
