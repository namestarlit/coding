#!/usr/bin/python3

with open('test.log', mode='w', encoding='utf-8') as f:
    f.write("test succeeded")

with open('test.log', encoding='utf-8') as f:
    print(f.read())

with open('test.log', mode='a', encoding='utf-8') as f:
    f.write(" and again")

with open('test.log', encoding='utf-8') as f:
    print(f.read())
