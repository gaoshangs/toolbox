function foo(...) 
    for i=1, select("#", ...) do
        print(i,"-->", select(i, ...))
    end
end

foo(1,2,3,4,5)


print(select(2, 11,22,33,44))
