class Student(object):
    def __init__(self):
        pass
    def __call__(self, name ,age):
        self.name = name
        self.age = age
        print("My name is %s, age is %d" % (self.name, self.age))

stu = Student()
stu('zhangsan', 123)
