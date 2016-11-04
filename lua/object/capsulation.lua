Shape = {area=0}
function Shape:new(o, side)
    o = o or {}
    setmetatable(o, self)
    self.__index = self
    side = side or 0
    self.area = side * side
    return o
end

function Shape:printArea()
    print("面积是:",self.area)
end

shape1 = Shape:new(nil, 10)
shape1:printArea()
