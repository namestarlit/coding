#!/usr/bin/python3

# Fibonacci Series
# The sum of two numbers defines the next element

a, b = 0, 1

n = int(input("Enter the max number of the Fibonacci Series: "))

while a < n:
    print(a, end=' ')
    a, b = b, a + b

print()
