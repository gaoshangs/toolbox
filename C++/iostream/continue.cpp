#include <iostream>
using namespace std;

int main(){
    int x=0;
    int sum=0;
    cout<<"print a int number,enter 'q' to quit"<<endl;
    while(cin>>x){
        sum += x; 
    }
    cout<<"sum = "<<sum;
    return 0;
}
