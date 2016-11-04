m2 = {}
m2.constant = "m2 CONSTANT"
function m2.func1()
    io.write("m2 public function")
end

local function func2()
    print("m2 private func2")
end

function m2.func3()
    func2()
end

return m2
