#include <iostream>
using namespace std;
int main(){
    int a = 10;
    int &b = a;
    int c = 100;
    const int &d = c;//常引用
    b = 20;
//    d = 200;//常引用不可更改原始值
    c = 200;//但可以更改原始引用地址的值
    cout <<a<< ","<<b<< endl;
    cout <<&a<< "," << &b<<endl;
    cout <<c<< "," << d<<endl;
    return 0;
}
