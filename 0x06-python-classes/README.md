# 0-square.py
## Empty class Square that defines a square.

# 1-square.py
## Class Square that defines a square.
- Private instance attribute: size
- Instantiation with size

# 2-square.py
## Class Square that defines a square.
- Private instance attribute: size
- Instantiation with optional size: def __init__(self, size=0):
- size must be an integer, otherwise raise a TypeError exception with the message size must be an integer
- if size is less than 0, raise a ValueError exception with the message size must be >= 0

# 3-square.py
## Class Square that defines a square.
- Private instance attribute: size
- Instantiation with optional size: def __init__(self, size=0):
- size must be an integer, otherwise raise a TypeError exception with the message size must be an integer
- if size is less than 0, raise a ValueError exception with the message size must be >= 0
- Public instance method: def area(self): that returns the current square area

# 4-square.py
## Class Square that defines a square.
- Private instance attribute: size:
- property def size(self): to retrieve it
- property setter def size(self, value): to set it:
- size must be an integer, otherwise raise a TypeError exception with the message size must be an integer
- if size is less than 0, raise a ValueError exception with the message size must be >= 0
- Instantiation with optional size: def __init__(self, size=0):
- Public instance method: def area(self): that returns the current square area

# 5-square.py
## Class Square that defines a square.
- Private instance attribute: size:
- property def size(self): to retrieve it
- property setter def size(self, value): to set it:
- size must be an integer, otherwise raise a TypeError exception with the message size must be an integer
- if size is less than 0, raise a ValueError exception with the message size must be >= 0
- Instantiation with optional size: def __init__(self, size=0):
- Public instance method: def area(self): that returns the current square area
- Public instance method: def my_print(self): that prints in stdout the square with the character #:
- if size is equal to 0, print an empty line

# 6-square.py
## Class Square that defines a square.
- Private instance attribute: size:
- property def size(self): to retrieve it
- property setter def size(self, value): to set it:
- size must be an integer, otherwise raise a TypeError exception with the message size must be an integer
- if size is less than 0, raise a ValueError exception with the message size must be >= 0
- Private instance attribute: position:
- property def position(self): to retrieve it
- property setter def position(self, value): to set it:
- position must be a tuple of 2 positive integers, otherwise raise a TypeError exception with the message position must be a tuple of 2 positive integers
- Instantiation with optional size and optional position: def __init__(self, size=0, position=(0, 0)):
- Public instance method: def area(self): that returns the current square area
- Public instance method: def my_print(self): that prints in stdout the square with the character #:
- if size is equal to 0, print an empty line
- position should be use by using space - Don’t fill lines by spaces when position[1] > 0

# 100-singly_linked_list.py
## Class Node that defines a node of a singly linked list

# 101-square.py
## Class Square that defines a square

# 102-square.py
## Compare two squares

# 103-magic_class.py
## Python class MagicClass
