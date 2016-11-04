#include <iostream>
using namespace std;

void swap(int &a, int &b);

int main(){
    int a;
    int b;
    cout << "请输入一个整数a:"<<endl;
    cin >> a;
    cout << "请输入一个整数b:"<<endl;
    cin >> b;
    cout << "a = "<<a<<", b = "<<b<<endl;
    cout << "交换ab的值"<<endl;
    swap(a, b);
    cout << "处理结果：a = "<<a<<", b = "<<b<<endl;
    return 0;
}

void swap(int &a, int &b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
