#!/usr/bin/python3

with open("image.png", mode='rb') as an_image:
    an_image.name
    an_image.mode
    print()

    print(an_image.tell())
    data = an_image.read(3)
    print(data)
    print(type(data))
    print()

    print(an_image.tell())
    print(an_image.seek(0))
    data = an_image.read()
    print(len(data))
