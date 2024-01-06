#!/usr/bin/python3

def f(x):
    return (x)

f.x = 42
print(f.x)

def f2(x):
    f2.counter = getattr(f2, "counter", 0) + 1
    return "Monty Python"

for i in range(10):
    f2(i)

print(f2.counter)
