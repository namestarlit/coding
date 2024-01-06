formatter = "{} {} {} {}"

print(formatter.format(1, 2, 3, 4))
print(formatter.format("One", "Two", "Three", "Four"))
print(formatter.format(True, False, False, True))
print(formatter.format(formatter, formatter, formatter, formatter))

print(formatter.format(
"How can you",
"do this",
"It's amazing",
"Waah!"
))
