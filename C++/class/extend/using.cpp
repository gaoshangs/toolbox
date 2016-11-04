#include <iostream>
using namespace std;

class People{
    protected:
        char const *name;
        int age;
    public:
        void say();
};

void People::say(){
    cout<<"Hello "<<this->name<<",You age is "<<this->age;
}

class Student :public People{
    public:
        using People::name;
        using People::age;
        float score;
        void learn();
    private:
        using People::say;
};

void Student::learn(){
    cout <<this->name<<"'s age is "<<this->age<<", score is "<<this->score<<endl;
}

int main(){
    Student std1;
    std1.name = "小明";
    std1.age = 28;
    std1.score = 98.7;
    //std1.say();
    std1.learn();
    return 0;
}
