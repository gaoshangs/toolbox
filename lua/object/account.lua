local _M = {}
_M.balance = _M.balance or 0
function _M.say(self, s)
    _M.balance = _M.balance + s
    print("say:"..s)
end

function _M.hi(self, s)
    _M.balance = _M.balance + s
    print("hi:"..s)
end

function _M.show(self, s)
    _M.balance = _M.balance + s
    print("show:"..s)
end

return _M
