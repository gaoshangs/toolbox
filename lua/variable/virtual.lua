local start, finish = string.find("hello world", "llo")
print(start, finish)

local start = string.find("hello world", "llo")
print(start)

local _, finish = string.find("hello world", "llo")
print(finish)

print("--循环中使用虚变量--")

local t = {1, 3, 5}
print("all data:")
for i, v in ipairs(t) do
    print(i, v)
end

print("part data:")

for _, v in ipairs(t) do
    print(v)
end
