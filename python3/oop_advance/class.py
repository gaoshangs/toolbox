class Student(object):
    __slots__ = ('name', 'score', '__sex')
    def __init__(self, name, sex, score):
        self.name = name
        self.score = score
    #privage
        self.__sex = sex 

    def print_score(self):
        print(self.name, self.__sex, self.score)

stu = Student('zhangsan', 'nan', 100)
stu.print_score()
print(stu._Student__sex)
stu.age = 22
'''
stu.name = 'lisi'
stu.score = 80
#stu.__sex = 'nv'
stu.age = 12
stu.print_score()
'''
