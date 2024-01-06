#!/usr/bin/python3

name = "Paul John"
age = 22
person = {'name': "Paul John", 'age': 22}

# %-formattting string formatting
print("Hello %s,\nYou're %d years old" % (name, age))
print()

# str.format() string formatting
print("Hello {},\nYou're {} years old".format(name, age))
print()
# Variable referencing by index in str.format()
print("Hello {1},\nYou're {0} years old".format(age, name))
print()

# You can pass reference using keys
print("Hello {name},\nYou're {age} years old".format(name=person['name'], age=person['age']))
print()
# Even better you can pass the whole dictionary
print("Hello {name},\nYou're {age} years old".format(**person))

