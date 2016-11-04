# -*- coding:utf-8 -*-
from collections import Iterable, Iterator
l = list(range(6))
d = {'a1':'aa1', 'a2':'aa2', 'a3':'aa3', 'd4':'aa4'}
s = "zifuchuan"
print(isinstance(s, Iterable))
print(isinstance(d, Iterable))
print(isinstance(134, Iterable))

for k in d:
    print(k)

for v in d.values():
    print(v)

print('items:')
for k, v in d.items():
    print(k,'=>', v)

print('enumerate:')
for k,v in enumerate(l):
    print(k,'=>',v)

for k in s:
    print(k)
