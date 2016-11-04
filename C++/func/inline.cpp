#include <iostream>
using namespace std;
int max(int, int, int);
int main(){
    int x, y, z, i;
    scanf("%d %d %d", &x, &y, &z);
    i = max(x, y, z);
    cout << "i = "<< i<<endl;
    return 0;
}

inline int max(int a, int b, int c){
    if(b > a) a = b;
    if(c > a) a = c;
    return a;
}
