#-*- coding:utf-8 -*-
# 1 1 2 3 5 8 13 21
def fib(num):
    n,a,b = 0,0,1
    while n < num:
        yield b
        a,b = b, a+b
        n = n+1
    return 'done'
max = int(input('max fib number:'))
f = fib(max)
print(f)
#for x in f:
#    print(x)
print("get generator return value:")
#get generator return value
while True:
    try:
        a = next(f)
        print(a)
    except StopIteration as e:
        print("Generator return value:", e.value)
        break
