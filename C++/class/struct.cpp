#include <iostream>
using namespace std;

struct Student{
    char const *name;
    int age;
    Student(char const *, int);
    void say();
};

Student::Student(char const *name, int age){
   this->name = name;
   this->age = age;
}

void Student::say(){
    cout <<this->name<<"的成绩是:"<<this->age<<endl;
}

int main(){
    Student std1("小明", 25);
    cout<<"直接获取成员变量:"<<endl;
    cout<<std1.name<<","<<std1.age<<endl;
    std1.say();
    return 0;
}
