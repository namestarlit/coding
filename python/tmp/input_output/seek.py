#!/usr/bin/python3

with open("seekfile", 'rb+') as f:
    f.write(b'0123456789abcdef')

    # Go to the 6th byte of the file
    print(f.seek(5))
    f.read(1)
    # Go to the 3rd byte before the end
    print(f.seek(-3, 2))
    f.read(1)
