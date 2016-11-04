#include <iostream>
using namespace std;

int main(){

    string str = "abcdef";
    try{
        char str1 = str[100]; 
        cout<<"str1:"<<str1<<endl;
    }catch(exception e){
        cout<<"[1]error :out of bounds"<<endl;
    }

    try{
        char str2 = str.at(100);
        cout<<"str2:"<<str2<<endl;
    }catch(exception e){
        cout<<"[2]error:out of bounds"<<endl; 
    }
    return 0;
}
