#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
    string s = "123.222";
    double n = atof(s.c_str());
    printf("s = %lf", n);
}
