#!/usr/bin/python3
def divisible_by_2(my_list=[]):

    is_mul = []
    for i in range(len(my_list)):
        if my_list[i] % 2 == 0:
            is_mul.append(True)
        else:
            is_mul.append(False)
    return (is_mul)
