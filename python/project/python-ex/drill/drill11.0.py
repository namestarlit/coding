favorite_colour = input('What\'s your favorite colour?')
print('''
By any chance do you wish to change anything about your life?
If yes, I would like to hear it
''')
thing_to_change = input()

print("I hope you're enjoying this, aren't you")
feedback = input()

print("Thank you so much. What's your name please")
name = input()

print(f'''
The user {name} input the following data\nfavorite colour(s): {favorite_colour}
about something they wish to change: {thing_to_change}
and their feedback on this program: {feedback}.
'''
)
