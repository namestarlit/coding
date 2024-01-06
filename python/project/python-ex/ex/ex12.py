age = input("How old are you?")
height = input("How tall are you?")
weight = input("How much do you weigh?")

print(f'''
So, you're {age} old, {height} tall, and {weight} heavy.
'''
)

print('Did you miss me?,', input())
# You can write like this , but python will demand the input first before
# printing out, so there won't be any prompting message or anything just blank.

print("How are you?", input('how are you?'))
# wrting it like this will demand the input first as before, and will display
# the promting message 'how are you' and then print it all, 'How are you your input'

# using either way of the above from line 10, your input will never be stored
# in any variable, so you can't print it out alone.

# you might be thinking
#print("How are you?", answer = input()) would work
# well, I tried it, and it didn't, returning a syntax Error: try it for yourself
