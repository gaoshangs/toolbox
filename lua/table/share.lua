tab1 = {}
function show(tab, name) 
    print(name.." 1", tab[1]);
    print(name.." wow", tab["wow"]);
end

print("tab1 的类型是：", type(tab1))
tab1[1] = "Lua"
tab1["wow"] = "修改前"
show(tab1, "tab1")

tab2 = tab1
show(tab2, "tab2")

tab2[1] = nil
show(tab1, "tab1")
show(tab2, "tab2")

tab2 = nil
print("tab2", tab2);
show(tab1, "tab1")
