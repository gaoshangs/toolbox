m1 = {}
m1.constant = "CONSTANT"
function m1.func1()
    io.write("public function")
end

local function func2()
    print("private func2")
end

function m1.func3()
    func2()
end

return m1
