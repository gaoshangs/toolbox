#include <iostream>
using namespace std;

int main(){
    string str = "abcdef";
    char str1 = str[100];
    cout<<str1<<endl;
    char str2 = str.at(100);
    cout<<str2<<endl;
    return 0;
}
