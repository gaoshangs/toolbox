#include <iostream>
using namespace std;
class People{
    public:
        const char *name;
        int age;
    public:
        People(const char *name, int age):name(name), age(age){
            cout<<"People name="<<name<<",age="<<age<<endl; 
        }
        void say(){
            cout<<"People say"<<endl; 
        }
};

class Student: public People{
    public:
        int score;
    public:
        Student(const char *name, int age, int score):People(name, age){
            this->score = score; 
            cout<<"Student name="<<name<<",age="<<age<<",score"<<score<<endl; 
        }

        void say(){
            cout<<"Student say"<<endl; 
        }

        void say(const char *word){
            cout<<"Student say"<<word<<endl; 
        }
};

int main(){
    People p1 = People("人类", 30);
    p1.say();

    Student stu1 = Student("小花", 30, 98);
    stu1.say();
    stu1.say("哈哈");

    //指针
    Student *stu2 = new Student("小明", 20, 70);
    stu2->say();
    delete stu2;

    return 0;
}
