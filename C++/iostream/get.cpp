#include <iostream>
using namespace std;
int main(){
    cout<<"Enter a string"<<endl;
    char ch[20];
    cin.get(ch, 10, '/');
    cout<<"ch:"<<ch<<endl;

    cin.get(ch, 10, '/');
    cin.get(ch, 10, '/');
    cout<<"ch:"<<ch<<endl;

    return 0;
}
