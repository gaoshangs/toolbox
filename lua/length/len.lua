local a1 = {1, a = 2, 3, b = 4}
local a2 = {1, nil}
local a3 = {1, nil, 3} -- Lua 3 Luajit 1
local a4 = {1, nil, 3, nil} 
local a5 = {1, nil, 3, nil, 5} 
print("#a1", #a1)
print("#a2", #a2)
print("#a3", #a3)
print("#a4", #a4)
print("#a5", #a5)
