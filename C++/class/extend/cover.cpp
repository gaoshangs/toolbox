#include <iostream>
using namespace std;
class People{
    public:
        void say1();
        void say2();
};
void People::say1(){
    cout<<"People::say1"<<endl;
}

void People::say2(){
    cout<<"People::say2"<<endl;
}


class Student: public People{
    public:
        void say1();
        void say2(int);
};

void Student::say1(){
    cout<<"Student::say1"<<endl;
}

void Student::say2(int a){
    cout<<"Student::say2("<<a<<")"<<endl;
}

int main(){
    Student std1;
    cout<<"std1.say1():"<<endl;
    std1.say1();
  //  cout<<"std1.say2():"<<endl;
  //  std1.say2();
    cout<<"std1.say2(56):"<<endl;
    std1.say2(56);
    cout<<"std1.People::say1():"<<endl;
    std1.People::say1();
    cout<<"std1.People::say2():"<<endl;
    std1.People::say2();
    return 0;
}
