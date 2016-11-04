function isEmpty(tab)
    if tab == nil or next(tab) == nil then
       return true 
    else
       return false 
    end
end

local a1 = nil 
local a2 = {}
local a3 = {a="aa"}

print(isEmpty(a1))
print(isEmpty(a2))
print(isEmpty(a3))
