local file, err = io.open("/Data/tmp/m.mkv","r")
local m1, err = io.open("/Data/tmp/m1.mkv","a+")
if not file then
    ngx.log(ngx.ERR, "read file err:", err)
    ngx.exit(ngx.HTTP_SERVICE_UNAVAILABLE)
end
local data
while true do
    data = file:read(1024)
    if not data then
        break
    end
    ngx.print(data)
    m1:write(data)
    ngx.flush(true)
    ngx.sleep(1)
end
file:close()
m1:close()
