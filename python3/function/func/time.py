import time
def f(num):
    i = 0
    a = 0
    while i< num:
        a +=i
        i+=1
    return a

b_1= time.time()
f(10000000)
e_1 =time.time() 
print(e_1 - b_1)

b_2= time.clock()
f(10000000)
e_2 =time.clock() 
print(e_2 - b_2)
