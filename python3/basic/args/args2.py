# -*- coding:utf-8 -*-

def a1(x1, x2=2, x3=3):
    print(x1, x2, x3)

def a2(x1, **args):
    print(x1, args['x2'], args['x3'])

a1('xx1', x3='is x3', x2='is x2')
a1('xx1', x3='is x3', x2='is x2')

