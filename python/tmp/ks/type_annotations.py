#!/usr/bin/env python3
"""Type annotations in Python"""
from typing import Dict, List, Tuple
from typing import Any, Union, Iterable, Callable
from typing import Final, Optional, Literal, TypeAlias


# Standard Python Objects
name: str = "Alice"
year: int = 1974
task: list = []
proj: tuple = ()
info: dict = {}

# For list, tuple, and dict use typing module to have more control
task: List[int] = []    # List of integers
proj: Tuple[str] = ()   # Tuple of strings
info: Dict[int, str] = {}   # Dict from int to string

# Multiple type hints for an object
area: Union[int, float] = side * side   # Area can be int or float
area: int|float = side * side # Pipe since Python 3.10

# Type hints for None value
count: Optional[int] = 10

# Type hints for iterable
def total_sum(arr: Iterable):
    pass

# Type hints for constants
PI: Final = 3.1412

# Type hints for fixed values
grade: Literal['A', 'B', 'C', 'F']  # Fixed set of values for grade
grade = 'A'

# Type hints for objects with any possible value
data: Any = 10

# Type hints in functions
# You can use any of the above type hints in function
def add_str(str1: str, str2: str) -> str:
    return string[::-1]

# Type hint of a function object
def functionA(functionB: Callable) -> int:
    pass

# Type hint aliasing
InFloStr = Union[int, float, str]   # Declare alias for type hint
data: InFloStr = 10

InFloStr: TypeAlias = Union[int, float, str]    # Since Python 3.10
data: InFloStr = 10
