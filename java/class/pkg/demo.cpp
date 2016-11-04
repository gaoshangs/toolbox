#include <iostream>
using namespace std;

class demo{
    public:
        const char *name;
        int age;
    public:
        demo(const char *, int);
        void say();
};

demo::demo(const char *name, int age):name(name), age(age){
    cout<<"construct name="<<name<<",age="<<age<<endl;
}

void demo::say(){
    cout<<"hi, my name is"<<this->name<<", my age is "<<age<<endl;
}

int main(){
    demo stu1("小花", 23);
    stu1.say();
}
