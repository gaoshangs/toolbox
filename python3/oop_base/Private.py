# -*- coding:utf-8 -*-
class Student(object):
    def __init__(self, name, score):
        self.__name = name
        self.__score = score
        self.name = name
        self.score = score 
        self._name = name
        self._score = score 
    def set_score(self, score):
        if 0 <=score <=100:
            self.__score = score
            return True
        else:
            raise ValueError('bad error')

    def get_score(self):
        return self.__score 

    def say(self):
        print('%s score: %s' % (self.__name, self.__score))

zs = Student('zhangsan', 100)
print(zs.name, zs.score)
print(zs._name, zs._score)
zs.say()
print("set_score(10)", zs.set_score(10))
print("get_score():", zs.get_score())
zs.say()
print("set_score(-12)", zs.set_score(-10))
zs.say()
