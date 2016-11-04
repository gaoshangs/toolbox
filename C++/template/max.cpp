#include <iostream>
using namespace std;
int max(int a, int b, int c){
    if( b > a) a = b;
    if( c > a) a = c;
    return a;
}

double max(double a, double b, double c){
    if( b > a) a = b;
    if( c > a) a = c;
    return a;
}

int main(){
    cout<< max(2, 3, 4)<<endl;
    cout<< max(2.2, 2.1, 2.0)<<endl;
    return 0;
}
