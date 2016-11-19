'''
class Hello(object):
    def hello(self, name='world’):
            print('Hello, %s.' % name)
'''
#使用元类创建类同上
def fn(self, name='world'):
    print('Hello, %s' % name)

Hello = type('Hello', (object,), dict(hello=fn))# 通过元类创建 Hello class
h = Hello()
h.hello()
h.hello(name = 'Gason')
h.hello('Gason')
print(type(Hello))
print(type(h))
