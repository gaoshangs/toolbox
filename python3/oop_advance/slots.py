class Student(object):
    __slots__ = ('name', 'age')
    pass

class GreatStu(Student):
    pass

stu = Student()
stu.name = 'zhangsan'
stu.age = 23
print(stu.name, stu.age)
try:
    stu.sex = 'nan'
except AttributeError as e:
    print('AttributeError:', e)
g = GreatStu()
g.sex = 'nan'
print(g.sex)
