#include <iostream>
using namespace std;
//基类--People
class People{
    private:
        char const *name;
        int age;
    public:
        void setName(char const *);
        void setAge(int);
        char const * getName();
        int getAge();
        void pSay();
};

void People::setName(char const *name){
    this->name = name;
}

void People::setAge(int age){
    this->age = age;
}


char const * People::getName(){
    return this->name;
}

int People::getAge(){
    return this->age;
}

void People::pSay(){
    cout<<this->name<<"的年龄:"<<this->age;
}

//派生类--Student
class Student : public People{
   private:
        float score;
   public:
        Student(char const *, int, float);
        void setScore(float);
        float getScore();
        void say();
};

Student::Student(char const* name, int age, float score){
    this->setName(name);
    this->setAge(age);
    this->setScore(score);
}

void Student::setScore(float score){
    this->score = score;
}

float Student::getScore(){
    return this->score;
}

void Student::say(){
    this->pSay();
    cout<< ",成绩是:"<<this->score<<endl;
}

int main(){
   Student std1("小明", 28, 98.7);
   std1.say();
   return 0;
}
