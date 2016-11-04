-- random
local i = 10
local seq = {}
while(i > 0)
do
    local num = math.random(10)
    seq[i] = num
    print(num)
    i = i - 1
end
return seq
