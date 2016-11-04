print("--index--")
local mt1 = {a="aa", b="bb"}
local t1 = setmetatable({}, {__index=mt1})
mt1.c = "cc"
print(mt1.c)
print(t1.c)
print()

print("--newindex--")
local mt2 = {a="aa"}
local t2 = setmetatable({}, {__newindex=mt2})
t2.b = "bb"
print(t2.a, mt2.a)
print(t2.b, mt2.b)

local t2 = setmetatable({}, {__tostring=function(self)
        local res = '{'
        for k, v in pairs(self) do
           res = res.. k.."="..v..','
        end
        res = res.. '}'
        return res
    end
    })
t2.a = "aa"
t2.b = "bb"
print(t2)

print("--call--")

local ctab = {}
function foo(self, arg)
    print("call from "..arg)
end
setmetatable(ctab,{__call=foo})
print(ctab("foo"))

print("--metatable--")
--Object = setmetatable({}, {__metatable="nnnn"})
--print(getmetatable(Object))
local Object = setmetatable({}, {__index={a="aa", b="bb"}})
print(Object.a)
setmetatable(Object, {})
print(Object.a)
