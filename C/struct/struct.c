#include <stdio.h>
struct Student{
    char *name;
    int age;
    double score;
} stu1;
int main(){
    stu1.name = "小明";
    stu1.age = 10;
    stu1.score = 92.2;
    printf("%s的年龄是:%d,成绩是:%lf", stu1.name, stu1.age, stu1.score);
    return 0;
}
