#include <iostream>
using namespace std;

class Base{
    public:
        void a(){cout<<"Base::a()"<<endl;}
        virtual void b(){cout<<"Base::b()"<<endl;}//虚函数
        virtual void c(){cout<<"Base::c()"<<endl;}//虚函数
};

class Derived: public Base{
    public:
        void a(){cout<<"Derived::a()"<<endl;}
        void b(){cout<<"Derived::b()"<<endl;}
        virtual void c(int a){cout<<"Derived::c()"<<endl;}
        void d(){cout<<"Derived::d()"<<endl;}
};

int main(){
    Base *p = new Derived;
    p->a();
    p->b();
    //p->c(123);//编译错误：重载基类虚函数，不构成多态
    //p->d();//编译错误：派生类新增函数，基类没有该函数
    return 0;
}
