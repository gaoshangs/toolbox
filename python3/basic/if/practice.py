#-*- coding:utf-8 -*-
weight = float(input('input weight(kg) :'))
height = float(input('input height(m):'))
bmi = weight/pow(height,2)
if bmi >32:
    print("too fat")
elif bmi >28:
    print("fat")
elif bmi >25:
    print('too heavy')
elif bmi >18.5:
    print('normal')
else:
    print('too light')
