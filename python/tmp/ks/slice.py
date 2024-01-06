name = "starlit" 

print(name)
# string slicing
print(name[:4]) # from index 0 to index 3. indicate up to 4
print(name[-3:]) # from the back, up to index -3 starting from -1

# using f.string to insert values of variables
him = f"{name} is the best"
# split() function, splits string literals
# separated by space
print(him.split())

him = him.split()

for name in him:
    if (name == "starlit"):
        print(f"{name} is the best")
