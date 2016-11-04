array = {"aa", "bb"}

function iterator(collection)
    local index = 0
    local count = #collection
    return function ()
        index = index+1
        if index <=count then
            return index,collection[index]
        end
    end
end

for key,element in iterator(array) do
    print(key,element)
end
