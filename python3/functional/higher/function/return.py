def lazy_sum(*args):
    def sum():
        ax = 0
        for n in args:
            ax = ax+n
        return ax
    return sum
f1 = lazy_sum(1,3,5,6,7)
f2 = lazy_sum(1,3,5,6,7)
a = 123
b = 123
print(a==b)
print(f1)
print(f2)
print(f1())
