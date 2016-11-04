local check = require("check")
A = 2
local B = check:add(A, A)
print(B)
check:updateA()
print(A)
