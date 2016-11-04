#5*fact(4)
#5*4*fact(3)
#print(fact(5))

def fact(x):
    if x==1:
        return 1 
    return x*fact(x-1) 

#fact(4,5*4)
#fact(3,5*4*3)
#fact(2,5*4*3*2)
#fact(1,5*4*3*2*1)
def fact(x, res):
    if x == 1:
        return res
    return fact(x-1, res*(x-1))
def do_fact(x):
    return fact(x-1,x*(x-1))
print(do_fact(5))
