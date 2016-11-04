# -*- coding:utf-8 -*-
from functools import reduce
def f(a,b):
    return a+b
L = list(range(1,101))
r = reduce(f, L)
print(r)
