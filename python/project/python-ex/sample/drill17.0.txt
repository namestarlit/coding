#import exists function from os.path module
from os.path import exists
print("COPYING APP\n")
print('_____' * 10)

input_file = input('\nEnter the name of the file to copy content from:')
output_file = input('Enter the name of the file to copy content to:')

#check if output file exists
print(f"{output_file} exists: {exists(output_file)}")
if exists(output_file) == False:
    print(f"Creating the new file {output_file}")

x = open(input_file) # open input file
y = x.read() # read contents of input file

u = open(output_file, 'w') # open output file in read mode
v = u.write(y) # copy input file content into output file

print("Copying completed!")

x.close() # close input file
u.close() # close output file

exit = input("Press any key to exit!")
