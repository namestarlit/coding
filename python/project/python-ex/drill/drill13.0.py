from sys import argv

script, v1, v2 = argv

print("The first variable:", v1)
print("The second variable:", v2)

v1 = input("Name:")
v2 = input("Age:")

print(f'''
Confirm your details.

Name: {v1}
Age: {v2}
'''
)

exit = input("Press any key to exit!")
