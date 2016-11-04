class Student(object):
    name = 'zhangsan'
s = Student()
print(s.name)
print(Student.name)
s.name = 'lisi'
print(s.name)
print(Student.name)
del s.name
print(s.name)
