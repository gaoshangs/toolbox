local args = ngx.req.get_uri_args()
for k, v in pairs(args) do
    ngx.say("[GET]:", k, "=>", v)
end
ngx.req.read_body()
local args = ngx.req.get_post_args()
for k, v in pairs(args) do
    ngx.say("[POST]:", k, "=>", v)
end
ngx.say(ngx.config.prefix())
