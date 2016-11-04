local loop_count = tonumber(arg[1])
local fun_pair = "ipairs" == arg[2] and ipairs or pairs 
local t = {}
for i=1, 100 do 
    t[i] = 1
end
for i=1, loop_count do 
    for j=1, 1000 do

        for k,v in fun_pair(t) do
            --
        end
    end
end
