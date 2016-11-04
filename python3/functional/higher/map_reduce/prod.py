# -*- coding:utf-8 -*-
from functools import reduce
def prod(x, y):
    return x*y
L = list(range(1,11, 2))
print(L)
print(reduce(prod, L))

