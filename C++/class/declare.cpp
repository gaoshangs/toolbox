#include <iostream>
using namespace std;

class Student{
    public:
        char const *name;//不允许在成员变量中进行赋值
        int age;
        float score;
    void say(){
        cout << name<<"的年龄是："<<age<<",考试成绩为："<<score<<endl;
    }
};

int main(){
    Student std1;
    std1.name = "小明";
    std1.age = 25;
    std1.score = 85.2;
    std1.say();
    return 0;
}
