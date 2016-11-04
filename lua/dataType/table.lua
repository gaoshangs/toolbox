tab1 = {}
print(tab1)
tab1["a"] = "aaa"
tab1[3] = 3333
for k,v in pairs(tab1) do
    print(k..":"..v)
end
print("-------")

tab2 = {'aa', "bb", 33, 44}
for k,v in pairs(tab2) do
    print(k..":"..v)
end
