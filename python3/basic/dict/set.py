#-*- coding:utf-8 -*-
key = [11,22,33,44,22,33,44]
print(key)
s = set(key)
print(s)
s.add(1000)
s.add(2000)
print(s)
print('-----')
s1 = set([1,2,3,4])
s2 = set([1,5,6,3])
print(s1 & s2)
print(s1 | s2)
