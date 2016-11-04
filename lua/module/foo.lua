local _M = {}
local mt = {__index = _M}

function _M.new(self, width, height)
    self.width = width
    self.height = height
    return self  -- 直接返回 
    --return setmetatable({width=width, height=height}, mt) -- 使用元表
end

function _M.area(self)
    return self.width * self.height
end

function _M.perimeter(self)
    return 2 * (self.width + self.height)
end

return _M
