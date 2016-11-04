#include <iostream>
using namespace std;
int max(int, int, int);
double max(double, double, double);
int main(){
    int x;
    double y;
    float z;
    x = max(10, 12, 26);
    y = max(10.912, 10.23, 9.23);
    cout << "int max ="<<x<<endl;
    cout << "double max ="<<y<<endl;
    return 0; 
}

int max(int a, int b, int c){
   if(b > a) a = b; 
   if(c > a) a = c; 
   return a;
}

double max(double a, double b, double c){
   if(b > a) a = b; 
   if(c > a) a = c; 
   return a;
}
