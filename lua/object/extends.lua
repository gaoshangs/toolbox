shape = {area = 0}
function shape:new(o, side)
    o = o or {}
    setmetatable(o, self)
    self.__index = self
    side = side or 0
    self.area = side * side
    return o
end

function shape:printArea()
    print("面积为:", self.area)
end

shape1 = shape:new(nil, 10)
shape1:printArea()

--长方形继承
square = shape:new()
function square:new(o, length, breadth)
    o = o or shape:new(o)
    setmetatable(o, self)
    self.__index = self
    length = length or 0
    breadth = breadth or 0
    self.area = length * breadth
    return o
end

function square:printArea()
    print("长方形面积是:", self.area)
end

square1 = square:new(nil, 10, 20)
square1:printArea()
