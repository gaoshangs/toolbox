# -*- coding:utf-8 -*-
a = [1,23,-233,32,0]
print(a)
print("sorted(a):", sorted(a))
print("sorted(a, key=abs):", sorted(a, key=abs))

letter = ['bob', 'about', 'Zoo', 'Credit']
print("sorted(letter):", sorted(letter))
print("sorted(letter, key=str.lower):", sorted(letter, key=str.lower))
print("sorted(letter, key=str.lower, reverse=True):", sorted(letter, key=str.lower, reverse=True))
