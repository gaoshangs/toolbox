# -*- coding:utf-8 -*-
def a1(*args):
    if len(args) == 0:
        return None
    else:
        #return tuple
        return args

def a2(**args):
    if len(args) == 0:
        return None
    #return dict
    if 'x' in args:
        print(args['x'])
    if 'y' in args:
        print(args['y'])
    return args
arg1 = [1,2,3];
arg2 = {'x':12, 'y':34};
print(a1(*arg1))
print(a2(**arg2))
