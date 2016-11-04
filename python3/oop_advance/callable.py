class Student(object):
    pass
class StuCall(object):
    def __call__(self):
        return 'I am a callable object'
print(callable(Student()))
print(callable(StuCall()))
s = StuCall()
print(callable(s))
print(s())
