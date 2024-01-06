print("Hello, Hi there!") #greet the user

name = input("What's your name?\n") #input the user's name
Hometown = input("What's your Hometown?\n") #input the user's homwtown
My_Hometown = 'Mwanza' # this is my hometown

if Hometown == My_Hometown: #compare my hometown with the user's hometown
    print("Wow! That's my Hometown too.")
    print(f"Nice to meet you {name}")

    # the user will get this output if and only if we share the same hometown

else:
    print("Ooh! I'm from {}".format(My_Hometown))
    print(f"Nice to meet you {name}")
    print(f"I wish to visit you some day in {Hometown}")

    # the user will get this output if we don't share the hometown
