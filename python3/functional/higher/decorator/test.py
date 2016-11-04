import functools
def log(begin, end):
    def decorator(func):
        @functools.wraps(func)
        def wrapper(*args, **kw):
            print(begin)
            value = func(*args, **kw)
            print(end)
            return value
        return wrapper
    return decorator
@log('begin call', 'end call')
def f(i):
   return i*i 
print(f(3))
