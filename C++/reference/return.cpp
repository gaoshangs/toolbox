#include <iostream>
using namespace std;
int valplus(int &a);
int main(){
   int a = 23; 
   int b;
   b = valplus(a);
   cout << "a = "<<a<<", b = "<<b<<endl;
   return 0;
}
int valplus(int &a){
    //return a+=5;
    return a++;
}
