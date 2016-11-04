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
    A *p = new A(1);
    p->display();
    p = new B(2);
    p->display();
    p = new C(3);
    p->a = 300;
    p->display();
    return 0;
}
