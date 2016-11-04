mymetatable = {}
mytable = setmetatable({key1 = "value1"}, {__newindex = mymetatable})
print(mytable.key1)
mytable.key2 = "value2"
print(mytable.key2, mymetatable.key2)

mytable.key1 = "new value"
print(mytable.key1, mymetatable.key1)
