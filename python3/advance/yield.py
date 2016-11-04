#-*- coding:utf-8 -*-
def ood():
    print('step1')
    yield 1
    print('step2')
    yield 2
    print('step3')
    yield 3
    return 'done'
o = ood()
next(o)
next(o)
next(o)
