class Student(object):
    def __init__(self, name):
        self.name = name
    def __str__(self):
        return "the student name is %s" % self.name
stu = Student('zhangsan')
print(stu)
