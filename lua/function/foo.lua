i = 100 -- 全局变量在进行require时会造成全局变量污染

function add_one(i) -- 先声明,在调用
    return i + 1
end

i = add_one(i)
