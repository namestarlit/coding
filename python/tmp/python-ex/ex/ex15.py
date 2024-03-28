# import argv from sys module
from sys import argv
script, filename = argv # assign argument variables as script and filename

txt = open(filename) # open the file 'filename'

print(f"Here's your file {filename}") # print out the name of the file
print(txt.read()) # read the content from the opened file without arguments using .read() command

# selecting file to open from the user
print("Type the filename again:")
file_again = input('>') #input the filename to open from user

txt_again = open(file_again) # open the file input by the user
print(txt_again.read()) # display the content of the file using a .read() command

#well this is awesome...
# Note: commands ara also called function or methods.
# i.e. .read() is a fuction for displaying contents of a .txt without arguments
# and open() is a fucntion to open plain text or byte string files
