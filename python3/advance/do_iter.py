# -*- coding:utf-8 -*-
from collections import Iterable, Iterator

def g():
    yield 1
    yield 2
    yield 3

print('Iterable?[1,2,3]:', isinstance([1,2,3], Iterable))
print('Iterable?\'abc\':', isinstance('abc', Iterable))
print('Iterable?123:', isinstance(123, Iterable))
print('Iterable?g():', isinstance(g(), Iterable))

print('Iterator? [1,2,3]:', isinstance([1,2,3], Iterator))
print('Iterator? iter([1,2,3]):', isinstance(iter([1,2,3]), Iterator))
print('Iterator? \'abc\':', isinstance('abc', Iterator))
print('Iterator? iter(\'abc\'):', isinstance(iter('abc'), Iterator))
print('Iterator? 123:', isinstance(123, Iterator))
print('Iterator? g():', isinstance(g(), Iterator))

L = [1,2,3,4]

for x in L:
    print(x)
print('iter')
for x in iter(L):
    print(x)
print('next')
it = iter(L)
print(next(it))
print(next(it))
print(next(it))
print(next(it))

print('iter [(1,1), (2,4), (3,9)]:')
for x,y in [(1,1), (2,4), (3,9)]:
    print(x,y)
