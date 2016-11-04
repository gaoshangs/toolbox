# -*- coding:utf-8 -*-
def add(x, y, f):
    return f(x) + f(y)
print(add(-10, 10, abs))
