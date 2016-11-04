co = coroutine.create(
    function(i)
        print(i)
    end
)

coroutine.resume(co, 2)
print(coroutine.status(co))--dead
print("----")

co1 = coroutine.wrap(
    function(i)
        print(i)
    end
)
co1(1)
print("0000000000000000")

co2 = coroutine.create(
    function() 
       for i = 1,10 do
        print(i)
        if i==3 then
            print(coroutine.status(co2))
            print(coroutine.running())
        end
        coroutine.yield()
       end
    end
)

coroutine.resume(co2)
coroutine.resume(co2)
coroutine.resume(co2)

print(coroutine.status(co2))
print(coroutine.running())
