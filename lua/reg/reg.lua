local regex = [[\d+]]
local m, err = ngx.re.match("hello, 1234", regex, "o")
if m then
    ngx.say(m[0])
else
    ngx.say("not matched")
end
