# -*- coding:utf-8 -*-
def is_odd(num):
    return num %2 == 1
L = [x for x in range(10) if is_odd(x)]
print(L)

B = [x for x in range(10)]
print(list(filter(is_odd, B)))
