local _M = {}
function _M.show(self, v)
    _M.balance = v
end

function _M.say(s)
    print("say:",s)
end

function _M.hi(self, s)
    print("say:",s)
end
return _M
