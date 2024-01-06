#!/usr/bin/python3
"""
A Program to update and print your love life.

Note: You should an new girlfriends when you change one.
The program reads the list of your girlfriends. and adds
by appending to the file man_of_shit.txt.

"""
print(__doc__)

with open("man_of_shit.txt", 'a', encoding="utf-8") as f:
    print("""
Hi, Man of Shit...
Looks like you got a new girlfriend.
    """)
    check = input("Right? [Y/N]")

    if check == 'Y' or check == 'y':
        new_girlfriend = input("What's her name, huh? ")
    
        if new_girlfriend:
            f.write(new_girlfriend + '\n')
            print(f"New girlfriend has been added to the list..Lol")
        else:
            print("I hope you will get one soon!")


new_check = input("\nWould you like to see the current list of your girlfriends? [Y/N]")

if new_check == 'Y' or new_check == 'y':
    with open("man_of_shit.txt", 'r', encoding="utf-8") as f:
        for line in f:
            print(line, end='')
else:
    print("Goodbye Man of shit.")
