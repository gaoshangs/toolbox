# -*- coding:utf-8 -*-
#123.456
s = '123.456'
def add(x, y):
    return x + y
def str2float(s):
    m = s.find('.')
    if m > 0 :
       integer = s[0:m]
       decimal = s[m+1:]
       return int(integer)+int(decimal)*pow(10,-len(decimal))
    else:
        return int(s) 
    return num
print(str2float(s))
