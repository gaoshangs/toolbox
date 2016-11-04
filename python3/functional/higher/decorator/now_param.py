def log(text):
    def decorator(func):
        def wrapper(*args, **kw):
            print(text)
            return func(*args, **kw)
        return wrapper
    return decorator
#now = log('execute')(now)
@log('execute:')
def now(s):
    print(s)
now('2016-11-2')
print(now.__name__)
