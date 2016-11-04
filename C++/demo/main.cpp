#include <stdio.h>

int main(){
    class Student{
        public :
            char *name;
            int age;
            float score;
        public :
            void say(){
                printf("%s的年龄是:%d,成绩是:%f\n", name, age, score);
            }
    };

    class Student stu1;

    stu1.name = "xiaoming";
    stu1.age = 25;
    stu1.score = 98.2f;
    stu1.say();

    return 0;
}
