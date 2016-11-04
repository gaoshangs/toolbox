-- test.lua 文件脚本
a = 5               -- 全局变量
local b, e = 5, 1.2         -- 局部变量
print(a, b, e)

function joke()
    c = 5           -- 全局变量
    local d, f = 6, 22     -- 局部变量
end

joke()
    print(c,d,f)          --> 5 nil

do 
    local a = 6     -- 局部变量
    b = 6           -- 全局变量
    print(a,b);     --> 6 6
end

    print(a,b)      --> 5 6
