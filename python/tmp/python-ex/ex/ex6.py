types_of_people = 10
x = f"there are {types_of_people} types of people" # f-string is used to write a string or variable inside a string

binary = "binary"
do_not = "don't"
y = f"Those who know {binary}, and those who {do_not}"

print(x)
print(y)

print(f"I said: {x}")
print(f"I also said: {y}")

hilarious = False
joke_evaluation = "Isn't that joke so funny?! {}"

print(joke_evaluation.format(hilarious)) # formatting the string on joke_evaluation variable
# using a .format() syntax

w = "This is the left side of..."
e = "a string with a right side"

print(w + e) # print the two strings in a single line

her = 'Christina'

confension = "I think I'm falling in love with {}"
print(confension.format(her))

tell = "should I tell {}, that I'm loving her with every second that goes by"
print(tell.format(her))
