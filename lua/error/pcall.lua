function show(i, y)
    local a = i + y
    return a
    --error("error...")
end

ok, err = pcall(show, 33, 23)
print(ok)
print("=====")
print(err)
