import functools
#partial 支持 *args和*kw
int2 = functools.partial(int, base=2)
#int2 = int(n, {base:2})
a1 = '1000'
print(a1,'=', int2(a1))

#max2= max(10) 默认有10这个值参与比较
max2 = functools.partial(max, 10)
print(max2(1,2,3,4))
