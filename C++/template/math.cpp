#include <iostream>
using namespace std;
template <typename T> T max(T a, T b, T c){
    if(b > a) a = b;
    if(c > a) a = c;
    return a;
}

template <typename T> T sum(T a, T b){
    T c = a + b;
    return c;
}

int main(){
    cout<< max(2, 3, 4)<<endl;
    cout<< max(2.2, 2.1, 2.0)<<endl;
    cout<< sum(3, 4)<<endl;
    cout<< sum(1.1f, 1.2f) <<endl;
    return 0;
}
