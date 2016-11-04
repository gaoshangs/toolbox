other = {foo=3}
t = setmetatable({}, {__index = other})
print(t.foo)
print(t.bar)
