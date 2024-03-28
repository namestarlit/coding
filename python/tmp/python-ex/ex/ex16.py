# import argv fome sys module

from sys import argv
script, filename = argv # declare argument variables

print(f"We're going to erase {filename}") # filename: ex16_sample.txt
print("If you don't want that, hit CTRL-C(^C).")
print("If you want that, hit RETURN.")

input('?')

print("Opening the file....")
target = open(filename, 'w') # opens the file
print("Truncating the file. Goodbye!")
target.truncate() # erases all contents of the file

print("Now I'm going to ask you for three lines.")

line1 = input("Line 1:")
line2 = input("Line 2:")
line3 = input("Line 3:")

print("I'm going to write those to the file.")

#target.write() function writes new content to the file.

target.write(line1)
target.write('\n')
target.write(line2)
target.write('\n')
target.write(line3)
target.write('\n')

print("And finally, we close it.")
target.close() # target.close() function closes target

print("Would you like to see the new contents:")
x = input("Enter the file name:")
print('\n')
y = open(x) # open the new updated file, y is the varibale holding the object file
print(y.read()) # read the contents of the file, use varibale y not x

print("See! it's updated...")

y.close() # close the file, similarly use variable y not x

exit = input('Press any key to exit!') # well, this is just extra before the command line closes
