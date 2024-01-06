#!/usr/bin/python3

import io


a_string = "Something bad is happening, or maybe good."

a_file = io.StringIO(a_string)
print(a_file.read())
a_file.seek(0)

print(a_file.read(10))
print(a_file.tell())

a_file.seek(17)
print(a_file.read())
