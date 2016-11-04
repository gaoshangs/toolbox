local cloth = {color = "red", size=0}

function cloth:setSize(size)
    self.size = size
end

function cloth:getSize()
    print("size:", self.size)
end

function cloth:test()
    print("test private")
end

local jack = {name=""}
function jack.setName(name)
    jack.name=name
end

jack.getName = function()
    print("jack.name",jack.name)
end
--[[
cloth:setSize(19)
cloth:getSize()
cloth:test()
]]
jack.setName("我是jack")
jack.getName()
