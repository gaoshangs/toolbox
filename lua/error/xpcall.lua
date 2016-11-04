function myfunction (n)
    local x = n/2
    return x
    end

function myerrorhandler( err )
    print( "ERROR:", err )
    end
ok, err = pcall(myfunction, 1)
print(ok, "===", err)
--[[
    status = xpcall( myfunction(1), myerrorhandler )
print( status)
]]
