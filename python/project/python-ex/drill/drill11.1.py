print("YOUTH GROWTH PROGRAMME\n")
print('''
Hi! Welcome to the YOUTH GROWTH PROGRAMME
I'm Youth-Bot, and I would like to know few things about you, ready?
I guess so!
'''
)
print("what's your name?")
name = input()

print("How old are you?", end = ' ')
age = int(input())

if age < 18:
    print(f'''
    Oops! I'm sorry {name}
    You can't join this programme
    as this programme is for youngsters between 18 to 25 years old
    and you're less than 18 years old.

    Try joining us after {18 - age} years.
    We'll gladlly welcome you.

    '''
    )

elif age > 25:
    print(f'''
    Ooh! I'm sorry {name}
    You can't join this programme
    because you're more than 25 years old
    This programme is for youngsters between 18 to 25 years old
    and you're {age}
    
    Try bringing your relative who fits the profile.
    '''
    )

else:
#for (age > 18 && age < 25):
    print('What\'s your current location?')
    current_location = input()

    print("How do you feel about this programme?")
    feedback = input()

    print(f'''
    Confirm your details:
    Name: {name}
    Current location: {current_location}
    Age: {age} years old

    Type Y to confirm, N to cancel and restart the programme
    '''
    )
    x = input()

    if x == 'Y':
        print(f'''
        Congratulations {name}!
        Welcome, You're now part of the YOUTH GROWTH PROGRAMME
        We'll email you in a couple of days to let you know of 'what's next'

        For now, tell your family and friends about this Good News :)
        '''
        )

    else:
        print(f"Oops! Let's try again {name}\nrestart the application!" )

print("Thank you, and Good luck")
