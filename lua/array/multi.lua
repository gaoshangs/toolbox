multi = {}
for i=1,3 do
    multi[i] = {}
    for j = 1,3 do
        multi[i][j] = i*j
    end
end

for i=1,3 do
        for j = 1,3 do
            print(multi[i][j])
        end
end
