# __init__.py

"""
This is the initialization file for the package. It can contain
global configurations and any import statements that are necessary
for the package to function properly.
"""

# Import any necessary modules
import os
import sys
import logging

# Define any global variables or configurations
LOG_LEVEL = logging.INFO

# Configure logging for the package
logging.basicConfig(
        format="[%(asctime)s] [%(levelname)s] [%(name)s]: %(message)s",
        level=LOG_LEVEL,
        stream=sys.stdout,
        )

# Import any submodules within the package
from . import module1
from . import module2

