--重新实现泛型for循环 ipairs
function iter(a, i)
    i = i+1
    local v = a[i]
    if v then
        return i,v
    end
end

function foreach(a)
    return iter,a,0
end

arr = {"aa", "bb", "cc"}

for key,v in foreach(arr) do
    print(key,v)
end
