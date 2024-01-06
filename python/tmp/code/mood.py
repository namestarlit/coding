#!/usr/bin/python3
"""
mood.py

This program takes the user's mood as input
and prints some message to encourage them
based on some keyword in their input.

Usage example:
    run: ./mood.py
    > How do you feel today? 
    I feel good.

# based on the keyword `good` the program should print
    I am glad, you're feeling good.
"""

import random

print(__doc__)
print("\n......................................................\n")
print("Hello there, I am mood. what's your name?")
user_name = input("> ")
print(f"How are you feeling today {user_name}")
mood = input("> ")

# split words in `mood` to have a list of `words`
words = mood.split()
# Filter words to have each word only once
words = set(words)

# list of responses
good = [
        f"I am glad {user_name}, have it more good.",
        f"That's a good thing {user_name}. You should be grateful.",
        f"I am so happy for you, {user_name}",
        f"Lol.. Looks like you're having a good day\n" \
                "What's the secret {user_name}... I am just saying."
       ]

bad = [
        f"Sorry about that {user_name}. Well, it happens, so cheer up ",
        f"It'll pass {user_name}, and eventually you'll be fine.",
        f"Who knows your bad might turn good someday, straight up {user_name} \o/",
        f"It only gets better from here {user_name}.",
        f"At least you are breathing. Do you know what that means {user_name}?",
        f"{user_name}, How about checking out on your partner in crime"
      ]

# conditional statements and print some messages based on user input
for word in words:
    if "good" in word.lower():
        print(random.choice(good))
    elif "bad" in word.lower():
        print(random.choice(bad))
    elif "sick" in word.lower():
        print(f"Get well soon {user_name}. Try to get treatment " \
                "check on your doctor for advise.")
