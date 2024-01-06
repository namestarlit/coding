import os

# delete an empty directory
os.rmdir('/path/to/empty_directory')

# delete a non-empty directory recursively
import shutil
shutil.rmtree('/path/to/directory')
