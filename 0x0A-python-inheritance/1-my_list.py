#!/usr/bin/python3
"""Class MyList that inherits from list"""


class MyList(list):
    """implement lass MyList"""

    def print_sorted(self):
        """prints the list, but sorted"""
        print(sorted(self))
