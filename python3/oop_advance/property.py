class Student(object):
    @property
    def score(self):
        return self._score

    @score.setter
    def score(self, value):
        if not isinstance(value, int):
            raise ValueError('score must be integer')
        elif value >100 or value <0 :
            raise ValueError('score must between 0 ~ 100')
        self._score = value
    @property
    def decination(self):
        return 100 - self._score
stu = Student()
stu.score = 80
print(stu.score)
try:
    stu.score = -12
except ValueError as e :
    print('ValueError :', e)
print(stu.decination)
stu.decination = 232    
print(stu.decination)#设为私有，无法直接设置值
