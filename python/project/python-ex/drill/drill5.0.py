name = 'Paul John'
age = 22
height = 188.8 # centimeters
weight = 69 # kilograms
eyes = 'Black'
teeth = 'White'
hair = 'Black'
favorite_colour = 'Black & White'

print(f"Let's talk about {name}.")
print(f"He's {age} years old, and {round(height / 2.54)} inches tall!")
print(f"He's {weight * 2.205} pounds heavy too!")
print(f"Actually that's not heavy, just {weight} Kg")
print(f"He's got {eyes} eyes and {hair} hair.")
print(f"His teeth are usually {teeth}, depending on the snack.")
print(f"His favorite colours are {favorite_colour}")

Total = age + height + weight

print(f"If I add {age}, {height}, and {weight}. I get {Total}")
