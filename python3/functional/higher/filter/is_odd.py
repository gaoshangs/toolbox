# -*- coding:utf-8 -*-
def is_odd(num):
    return num % 2 == 1 

L = [1,3,4,234,12,53,22]
print(list(filter(is_odd, L)))
