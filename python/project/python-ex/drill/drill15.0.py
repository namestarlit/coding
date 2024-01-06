# import the argv from sys module
from sys import argv

# declare the argument variables
script, filename = argv

#filename input drill15.0_argv.txt on command line

# open the text file (filename)
x = open(filename)

print(filename)
# display contents of the file (filename) using .read() function
print(x.read())

x.close()

# using input method

print("\nRead contents of a file:")
# a prompt message
print("\nType the file name to open it:")
# input the 'file to open' name from user
fname = input('>') # fname input drill15.0_input.txt
#open the file using open() function
y = open(fname)
#display the contents of the file.
print(fname)
print(y.read())

y.close()
