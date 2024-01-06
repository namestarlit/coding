#!/usr/bin/python3

name = "Khuzunya"
name1 = "Paul"

input_name = input("what's your name? ")

if input_name == name:
    print(f"Hello, {name}. Congratulations, You did well\o/")
    print("Keep your head up and always do your best!")
    print("Your brother is proud of you :)")
elif input_name == name1:
    print(f"Hola, {name1}, You better finish your work.")
    print(f"Oops! You're too old for this, you know what to do! Finish your work.")
else:
    print(f"I am only for {name} and no one else.")
    print(f"Sorry {input_name}.")
