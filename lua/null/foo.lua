local person = {name = "zhangsan", age =24} 
print(person.name)
person = {}
print(person.name)
os.exit(200)
person = nil
if person and person.name then
    print(person.name)
else
    print("the index is nil")
end
