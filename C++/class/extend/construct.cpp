#include <iostream>
using namespace std;
class People{
    protected:
        char const *name;
        int age;
    public:
        People();
        People(char const *, int);
};

People::People():name("xxx"), age(0){}

People::People(char const *name, int age):name(name), age(age){}

class Student: public People{
    private:
        float score;
    public:
        Student();
        Student(char const *, int, float);
        void say();

};

Student::Student():score(0.0){}

Student::Student(char const *name, int age, float score):People(name, age), score(score){}

void Student::say(){
    cout <<name<<","<<age<<","<<score<<endl;
}

int main(){
    Student std1;
    std1.say();
    Student std2("小明", 28, 98.7);
    std2.say();
    return 0;
}
