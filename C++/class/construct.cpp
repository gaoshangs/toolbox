#include <iostream>
using namespace std;
class Student{
    protected:
        char const *name;
        int age;
        float score; 
    public:
        //构造函数
        Student(char const *);
        Student(char const *, int, float);
        void say();
        void setName(char const *);
        void setAge(int);
        void setScore(float);
};

Student::Student(char const *a, int b, float c){
    name = a;
    age = b;
    score = c;
}

Student::Student(char const *a){
   name = a; 
}

void Student::setName(char const *a){
    name = a;
}

void Student::setAge(int a){
    age = a; 
}

void Student::setScore(float a){
    score = a;
}

void Student::say(){
    cout<<name<<"的年龄是："<<age<<", 成绩为："<<score<<endl;
}

int main(){
    //Student std1("小明", 25, 87.6);
    Student std1("小明");
    std1.setAge(26);
    std1.setScore(98.23);
    std1.say();
    return 0;
}
