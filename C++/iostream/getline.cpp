#include <iostream>
using namespace std;
int main( )
{
    //I like C++./I study C++./I am happy.
    char ch[20];
    cout<<"enter a sentence:"<<endl;
    cin>>ch;
    cout<<"The string read with cin is:"<<ch<<endl;
    cin.getline(ch,20,'/');  //读个字符或遇'/'结束
    cout<<"The second part is:"<<ch<<endl;
    cin.getline(ch,20, '/');  //读个字符或遇'/n'结束
    cout<<"The third part is:"<<ch<<endl;
    return 0;
}
