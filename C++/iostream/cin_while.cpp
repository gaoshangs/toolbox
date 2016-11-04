#include <iostream>
using namespace std;

int main(){
    cout<<"Enter a grade:"<<endl; 
    int grade;
    while(cin>>grade){
        if(grade >= 60) cout<<"Good! grade:"<<grade<<endl; 
        if(grade < 60) cout<<"Bad! grade:"<<grade<<endl;
        cout<<"Enter a grade:"<<endl;
    }
    cout<<"End to enter"<<endl; 
    return 0;
}
