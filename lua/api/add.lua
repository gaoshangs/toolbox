local args = ngx.req.get_uri_args()
ngx.print(args.a + args.b)
