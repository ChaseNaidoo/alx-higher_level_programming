#!/usr/bin/python3
"""Define a class Square."""


class Square:
    """Defines a square."""
    def __init__(self, size=0):
        """Instantiation with size.

        Args:
        size (int): Size of square.
        """
        self.__size = size

    @property
    def size(self):
        """Get the size of square"""
        return (self.__size)

    @size.setter
    def size(self, value):
        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        elif value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value

    def area(self):
        """Returns the current square area."""
        return (self.__size * self.__size)

    def my_print(self):
        """Print square."""
        for i in range(0, self.__size):
            [print("#", end="") for j in range(self.__size)]
            print("")
        if self.__size == 0:
            print("")
