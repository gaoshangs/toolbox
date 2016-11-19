class Test(object):
    '''
    def __getattr__(self, attr):
        self.__dict__[attr] = 0
    '''

a = Test()
print(a.aa)
