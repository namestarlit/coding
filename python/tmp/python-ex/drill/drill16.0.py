# display the headline

print("Text Editor")

x = input('\nEnter the file name to start:')
y = open(x, 'r+') # open the file
print(y.read()) # dislay contents of the filename, without print, the contents won't be displayed
y.close() # close the filename

o = input("Enter the file name to Edit:")
z = open(o, 'w+') # open file in both read and write mode
print("Truncating the file....")
z.truncate() # erase all contents of the file

# input new contents to the file
print('\nEnter new contents of the file')
line1 = input()
line2 = input()
line3 = input()

# write the new contents to the file using .write() command
z.write(line1)
z.write('\n')
z.write(line2)
z.write('\n')
z.write(line3)
z.write('\n')

z.write(f"\n{line1}\n{line2}\n{line3}") # write all the text with a single .write() function

z.close() # close the file

new = input("Enter the file name to read its content:")
print(f'\nHere is the new contents of {new}\n')
r = open(new)
print(r.read()) # display contents of the file

r.close() # close the file

exit = input('\nPress any key to exit!')
