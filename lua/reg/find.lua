local s = "hello luaa"
local i, j = string.find(s, "a")
print(i, j)

local i, j = string.find(s, "hello")
print(i, j)

res, num = string.gsub("a (enclosed (In) parenttheses) line", "%b()", "")
print(res)
print(num)
