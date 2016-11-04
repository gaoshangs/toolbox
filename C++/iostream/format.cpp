#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a = 123.456789012345; 
    cout<<a<<endl;
    cout<<setprecision(9)<<a<<endl;
    cout<<setprecision(6)<<a<<endl;
    cout<<setiosflags(ios::fixed)<<a<<endl;
    cout<<setiosflags(ios::fixed)<<setprecision(8)<<a<<endl;
    cout<<setiosflags(ios∷scientific)<<setprecision(4)<<a;
    return 0;
}
