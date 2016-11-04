# -*- coding:utf-8 -*-
from collections import Iterable, Iterator
L = list(range(1,10))
def f(x):
    return x*x
a = [x*x for x in L]
print(a) 

b = map(f, L)
print(isinstance(b, Iterable))
print(isinstance(b, Iterator))
print(b)
for x in b:
    print(x)
