local ngx_var = ngx.var
ngx.say("ngx_var")
ngx.say(ngx_var.uri)
ngx.say(ngx_var.request_filename)
ngx.say(ngx_var.args)
ngx.say(ngx_var.query_string)
