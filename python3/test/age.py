# -*- coding:utf-8 -*-
try:
    age = int(input("input you age:\n"))
    if age > 100 :
        print('old')
    else:
        print('younger')
except ValueError as e:
    print('Error:', e)
