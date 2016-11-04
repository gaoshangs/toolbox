#-*- coding:utf-8 -*-

#ax^2+bx+c=0
import math
def quadratic(a,b,c):
    if not isinstance(a,(int, float)):
        raise TypeError("bad paramter")
    if not isinstance(b,(int, float)):
        raise TypeError("bad paramter")
    if not isinstance(c,(int, float)):
        raise TypeError("bad paramter")
    if a == 0:
        raise TypeError("a cannot be 0")
    Delta = b**2-4*a*c
    if Delta < 0:
      return  print('无实解')
    x1 = (-b+math.sqrt(Delta))/(2*a)
    x2 = (-b-math.sqrt(Delta))/(2*a)
    if Delta == 0:
        return print('x1=x2:',x1)
    else:
        return print('x1=:',x1,',x2=:',x2)
#(x+1)*(x+2) = 0
quadratic(1,3,2)
