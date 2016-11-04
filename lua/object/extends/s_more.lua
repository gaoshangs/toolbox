local s_base = require("s_base")
local _M = {}
local mt = {__index = s_base}

_M = setmetatable(_M, mt)

function _M.lower(s)
   return string.lower(s) 
end

return _M
