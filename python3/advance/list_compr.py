# -*- coding:utf-8 -*-
import os
l1 = []
for i in list(range(5)):
   l1.append(i*i) 
print('for, list:', l1)

l2 = [x*x for x in list(range(5))]
print('list_compr, l2:', l2)
d1 = {'a1':'aa1', 'a2':'aa2', 'a3':'aa3'}
print("[x+'=>'+y for x,y in d1.items()]:", [x+'=>'+y for x,y in d1.items()])

print('list files')

print([f for f in os.listdir('.')])
l3 = ['Hello', 'World']
print([s.lower() for s in l3])

test = ['Hello', 'World', 18, 'Apple', None]

print([s.lower() for s in test if isinstance(s, str) ])
