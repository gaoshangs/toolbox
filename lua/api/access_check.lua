local param = require("comm.param")
local args = ngx.req.get_uri_args()
if not param.check_number(args.a, args.b) then
    ngx.say("参数有误")
end
