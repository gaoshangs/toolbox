file = io.open("test.lua", "r")
print(file:seek("end"))
file:close()
