#include <iostream>
using namespace std;
void output(int a, float b=12.23, char c = '@');
int main(){
    int a;
    float b;
    char c;
    cout << "请一次输入int float char 类型数据"<< endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if(!a){
        cout << "第一个字符格式不正确"<<endl;
        exit(0);
    }
    if(a && b && c){
        output(a, b, c);
    }else{
        output(a);
    }
    return 0;
}

void output(int a, float b, char c){
    cout<<"a = "<<a<<", b = "<<b<<", c = "<<c<<endl;
}
