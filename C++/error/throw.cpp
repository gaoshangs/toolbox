#include <iostream>
#include <string>
using namespace std;

int get_char(string, int);

int main(){
    string str = "123456";
    try{
       cout<< get_char(str,-10)<<endl;
       cout<< get_char(str,100)<<endl;
    }catch(int e){
        if(e == 1)
            cout<<"underflow"<<endl; 
        if(e == 2)
            cout<<"overflow"<<endl;
    }
}

int get_char(string str, int i){
   int len = str.length();
    if(i < 0)
        throw 1;
    if(i > len)
        throw 2;
    return str[i];
}
