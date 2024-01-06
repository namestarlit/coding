print("Mary had a little lamb.")
print("Its fleece were white as {}".format('snow'))
# The .format() syntax formats the string by adding snow in the {}s

print(" And everywhere that Mary went.")
print("." * 10 ) # prints . ten times

end1 = 'C'
end2 = 'h'
end3 = 'e'
end4 = 'e'
end5 = 's'
end6 = 'e'
end7 = 'B'
end8 = 'u'
end9 = 'r'
end10 = 'g'
end11 = 'e'
end12 = 'r'

# ends are variables each containing a single character to build up the word
#Cheese Burger

print(end1 + end2 + end3 + end4 + end5 + end6, end = ' ')
print(end7 + end8 + end9 + end10 + end11 + end12)

# Removing the comma at line 24, will result to syntanx error:invalid syntanx
#  comma is missing

# The end = ' ' function, combines the two string to form a single line statement
# Removing it, will result to the print on line 24 and line 25
# to be prented separately respectively

print("Paul", end = ' ')
print("John")

Firstname = 'Paul'
Surname = 'John'

print(Firstname + " " + Surname)

formatter = '{} {} {} {}'

print(formatter.format(1, 2, 3, 4))
print(formatter.format('One', 'Two', 'Three', 'Four'))
print(formatter.format(True, False, False, True))
print(formatter.format(formatter, formatter, formatter, formatter))

print(formatter.format(
'This was long',
'Damn it!',
"I'm glad",
"I made it"
))
