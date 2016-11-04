#include <iostream>
using namespace std;
class People{
    protected:
        char const *name;
        int age;
    public:
        People(char const*, int);
        ~People();
        void display();
};

People::People(char const *name, int age): name(name), age(age){
    cout<<"People::People()"<<endl;
}

People::~People(){
    cout<<"People::~People()"<<endl;
}

void People::display(){
    cout<<"People::display()"<<endl;
}

class Student:public People{
    private:
        float score;
    public:
        Student(char const *, int, float);
        ~Student();
        void say();
};

Student::Student(char const *name, int age, float score): People(name, age), score(score){
    cout<<"Student::Student()"<<endl;
}

Student::~Student(){
    cout<<"Student::~Student()"<<endl;
}

void Student::say(){
   cout<<this->name<<","<<this->age<<","<<this->score<<endl; 
}

int main(){
    Student std1("小明", 28, 98.7);
    std1.say();
    std1.display();
    return 0; 
}
