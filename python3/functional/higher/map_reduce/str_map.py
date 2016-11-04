# -*- coding:utf-8 -*-
s = "abcd"
U = {'a':'A', 'b':'B', 'c':'C', 'd':'D'}
def f(part):
    upper = U.get(part, -1)
    if upper == -1:
        return part 
    else:
        return upper

print(list(map(f, s)))

def t(a):
    return a.upper()

print(list(map(t, ['a', 'b', 'c', 'd'])))
