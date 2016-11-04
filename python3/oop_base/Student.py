#!/usr/bin/env python3
# -*- coding:utf-8 -*-

__author__='Gason Wong'

class Student(object):
    def __init__(self, name, score):
        self.name = name
        self.score = score

    def print_score(self):
        print('%s score :%s' %(self.name, self.score))

    def get_grade(self):
        if self.score >=90:
            return 'A'
        elif self.score >=80:
            return 'B'
        else :
            return 'C'
stu1 = Student('张三', 89)
stu2 = Student('李四', 98)
stu1.print_score()
print(stu1.get_grade())
stu2.print_score()
print(stu2.get_grade())
