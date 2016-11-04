def count():
    fs = []
    def f(x):
        def g():
            return x*x
        return g
    for i in range(1,4):
        fs.append(f(i))
    return fs
f1,f2,f3 = count()
print(f1())
print(f2())
print(f3())
