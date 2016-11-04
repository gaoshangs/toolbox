#include <iostream>
using namespace std;

class people{
    public:
        const char *name;
        int age;
    public:
        people(const char *, int);
        void say();
};

people::people(const char *name, int age):name(name), age(age){
    cout<<"this is people construct"<<endl;
}

void people::say(){
    cout<<"people say name="<<name<<",age="<<age<<endl;
} 

class teacher: public people{
   public:
        const char *school;
   public:
        teacher(const char*, int, const char *);
        void say();
};

teacher::teacher(const char*name, int age, const char *school):people(name, age), school(school){
    cout<<"this is teacher construct"<<endl;
}

void teacher::say(){
    cout<<"teacher say name="<<name<<",age="<<age<<",school = "<<school<<endl;
}


int main(){
    people *p1 = new people("人类", 20 );
    p1->say();
    teacher *t1 = new teacher("小花", 30, "黄冈");
    t1->say();

    delete p1;
    delete t1;
    return 0;
}

