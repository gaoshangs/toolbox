#include <stdio.h>
class Student{
    public:
        char const *name;
        int age;
        float score;

    public:
        void say(){
            printf("%s的年龄是：%d,成绩为：%.2f\n", name, age, score);
        }
} std1;

int main(){
    std1.name = "小明";
    std1.age = 23;
    std1.score = 98.23232;
    std1.say();
    
    Student *std2 = &std1;
    std2->name = "小花";
    std2->age = 28;
    std2->score = 56.2322;
    std2->say();
    return 0;
}
