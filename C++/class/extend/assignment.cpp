#include <iostream>
using namespace std;
class A{
    public:
        int a;
        A(int a):a(a){}
        void display(){cout<<"A::display == n:"<<this->a<<endl;}
};

class B: public A{
    public:
        B(int a):A(a){}
        void display(){cout<<"B::display == n:"<<this->a<<endl;}
};

class C: public A{
    public:
        C(int a):A(a){}
        void display(){cout<<"C::display == n:"<<this->a<<endl;}
};

int main(){
    A a(1);
    B b(2);
    C c(3);
    a.display();
    a = b;
    b.a = 11;
    a.display();
    a = c;
    a.display();
    return 0;
}
