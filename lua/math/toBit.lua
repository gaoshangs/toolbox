-- binary convert
local function toBits(num, bits)
    -- returns a table of bits, most significant first.
    bits = bits or select(2,math.frexp(num))
    local t={} -- will contain the bits
    for b=bits,1,-1 do
        t[b]=math.fmod(num,2)
        num=(num-t[b])/2
    end
	local binary = table.concat(t)
    return binary
end
print(math.frexp(7))
print(toBits(11))
print(toBits(11, 3))
