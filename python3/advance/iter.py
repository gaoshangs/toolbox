#-*- coding:utf-8 -*-
from collections import Iterable, Iterator
a1 = []
a2 = {}
a3 = "aaa"
a4 = 123
a5 = set(a1) 
a6 = [x for x in range(10)]
a7 = (x for x in range(10))
def g():
    yield 1
    yield 2
    yield 3
a8 = g()
print("type(a1):",a1,type(a1))
print("type(a2):",a2,type(a2))
print("type(a3):",a3,type(a3))
print("type(a4):",a4,type(a4))
print("type(a5):",a5,type(a5))
print("type(a6):",a6,type(a6))
print("type(a7):",a7,type(a7))
print("type(a8):",a8,type(a8))

print("isinstance(a1):",a1,isinstance(a1,Iterable))
print("isinstance(a2):",a2,isinstance(a2,Iterable))
print("isinstance(a3):",a3,isinstance(a3,Iterable))
print("isinstance(a4):",a4,isinstance(a4,Iterable))
print("isinstance(a5):",a5,isinstance(a5,Iterable))
print("isinstance(a6):",a6,isinstance(a6,Iterable))
print("isinstance(a7):",a7,isinstance(a7,Iterable))
print("isinstance(a8):",a7,isinstance(a8,Iterable))

print("isinstance(a1):",a1,isinstance(a1,Iterator))
print("isinstance(a2):",a2,isinstance(a2,Iterator))
print("isinstance(a3):",a3,isinstance(a3,Iterator))
print("isinstance(a4):",a4,isinstance(a4,Iterator))
print("isinstance(a5):",a5,isinstance(a5,Iterator))
print("isinstance(a6):",a6,isinstance(a6,Iterator))
print("isinstance(a7):",a7,isinstance(a7,Iterator))
print("isinstance(a8):",a7,isinstance(a8,Iterator))

t = iter([x for x in range(10)])
while True:
    try:
        print(next(t))
    except StopIteration:
        break
