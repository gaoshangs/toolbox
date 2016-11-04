mytable = {6, 7, 8}
mytable = setmetatable(mytable, {
    __tostring = function(mytable)
        local sum = 0
        for k,v in pairs(mytable) do
            sum = v+sum
        end
        return "表元素和为:"..sum
    end 
})
print(mytable)
