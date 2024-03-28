from sys import argv
# import argv function from sys module
from os.path import exists
# import exists function from os.path module

# Declare argument variables
script, from_file, to_file = argv

print(f"Copying from {from_file} to {to_file}.")

# We could do these two on one line, how?

in_file = open(from_file) # .open() function opens the input file
indata = in_file.read() # .read() function reads the contents of the input file

print(f"The input file is {len(indata)} bytes long.") # len fuction checks the size of the input file
print(f"Does the output file exist? {exists(to_file)}.") # exists function checks if the output file exists
print("Ready, hit Return to continue, CTRL-C to abort.")
confirm = input ('..') # waits for input to proceed

out_file = open(to_file, 'w+') # opens output file in write mode
out_file.write(indata) # writes the data from input file to output file
#print(out_file.read())

print("Alright, all done!")

out_file.close() # closes the output file
in_file.close() # closes the input file
