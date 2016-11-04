# -*- coding:utf-8 -*-
import time
start = time.clock()
string = "对不起la,我，是，卧底,真的很抱歉" 

def f(string):
    L = []
    for x in string:
        L.append(x)
    return L

i = 0
while i < 1000000 :
    f(string)
    i+=1

end = time.clock()
print("耗时", end-start, "s")
