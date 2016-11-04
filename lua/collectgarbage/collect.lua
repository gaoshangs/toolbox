mytable = {"apple", "orange", "banana"}
--[[for i=1,10 do
   print(i) 
end
]]
print(collectgarbage("count"))
mytable = nil
print(collectgarbage("count"))
print(collectgarbage("collect"))
print(collectgarbage("count"))
