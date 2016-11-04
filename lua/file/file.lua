--从文件输入
file = io.open("test.lua", "r")
io.input(file)
print(io.read())
print(io.read("*l"))
io.close(file)

--输出到文件
file = io.open("test.lua", "a")
io.output(file)
io.write("--test.lua 文件末尾注释\n")
io.close(file)
