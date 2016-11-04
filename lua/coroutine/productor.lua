function productor()
    print("begin coroutine")
    local i = 0
    while(true) do
       i = i+1 
       send(i)
    end
end

function consumer()
    print(coroutine.resume(product))
end

function send(x)
    return coroutine.yield(x)
end
product = coroutine.create(productor)
consumer()
consumer()
