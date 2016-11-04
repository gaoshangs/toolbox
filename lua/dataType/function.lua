function fun1(n)
    if n == 0 then
        return 1
    else
        return n * fun1(n-1)
    end
end
print(fun1(5))

fun2 = fun1;
print(fun2(5));
