#include <iostream>
using namespace std;
class Student{
    public:
       Student(const char *, int, float);
       void say();
       void printThis();
    private:
       const char *name;
       int age;
       float score;
};

Student::Student(const char* name, int age, float score){
    this->name = name;
    this->age = age;
    this->score = score;
}

void Student::say(){
    cout <<this->name<<"的年龄："<<this->age<<"，成绩："<<this->score<<endl;
}

void Student::printThis(){
    cout <<"this内存的地址："<<this<<endl;
}

int main(){
    Student std1("小明", 25, 98.7), *pstd = &std1;
    std1.say();
    std1.printThis();
    cout<<"*pstd的地址："<<pstd<<endl;
    return 0;
}
