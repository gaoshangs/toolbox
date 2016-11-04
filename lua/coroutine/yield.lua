function create(a, b)
   print("第一次协同程序", a, b)
   coroutine.yield(a+b)

   print("第二次协同程序", a, b)
   coroutine.yield(a*b)
   print("第三次协同程序", a, b)
end
co = coroutine.create(create)

print(coroutine.resume(co, 1, 10))
print(coroutine.resume(co, 1, 10))
print(coroutine.resume(co, 1, 10))
print(coroutine.resume(co, 1, 10))--第四次启动失败原因是第三次已经退出了协同程序
