# base.py
- Write the first class Base:
- Create a folder named models with an empty file __init__.py inside - with this file, the folder will become a Python package
- Create a file named models/base.py:
## Class Base:
- private class attribute __nb_objects = 0
- class constructor: def __init__(self, id=None)::
- if id is not None, assign the public instance attribute id with this argument value - you can assume id is an integer and you don’t need to test the type of it
- otherwise, increment __nb_objects and assign the new value to the public instance attribute id

# rectangle.py
- Write the class Rectangle that inherits from Base:
- In the file models/rectangle.py
- Class Rectangle inherits from Base
- Private instance attributes, each with its own public getter and setter:
   __width -> width
   __height -> height
   __x -> x
   __y -> y
- Class constructor: def __init__(self, width, height, x=0, y=0, id=None):
- Call the super class with id - this super call with use the logic of the __init__ of the Base class
- Assign each argument width, height, x and y to the right attribute

# square.py
- Write the class Square that inherits from Rectangle:
- In the file models/square.py
- Class Square inherits from Rectangle
- Class constructor: def __init__(self, size, x=0, y=0, id=None)::
- Call the super class with id, x, y, width and height - this super call will use the logic of the __init__ of the Rectangle class. The width and height must be assigned to the value of size
- You must not create new attributes for this class, use all attributes of Rectangle - As reminder: a Square is a Rectangle with the same width and height
- All width, height, x and y validation must inherit from Rectangle - same behavior in case of wrong data
- The overloading __str__ method should return [Square] (<id>) <x>/<y> - <size> - in our case, width or height
