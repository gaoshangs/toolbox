#include <iostream>
using namespace std;

int main(){
    const char *a = "BASIC";
    for(int i = 4; i>=0;i--){
        cout.put(*(a+i)); 
    }
    cout.put('\n');
    for(int i = 4; i>=0;i--){
        putchar(*(a+i)); 
    }
    putchar('\n');
}
