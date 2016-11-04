#include <iostream>
using namespace std;
#include "sum.h"
template <typename T>
T sum(T, T);

int main(){
    cout<<"a+b="<<sum(10, 20)<<endl; 
    cout<<"a+b="<<sum(11.11f, 12.22f)<<endl; 
    return 0;
}

