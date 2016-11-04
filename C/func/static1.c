#include <stdio.h>
void func();
static int a = 5;
int main(){
    while (a--){
        printf("%d,", a);
        func();
    }
}

void func(){
    static int b = 0;
    b++;
    printf("%d\n", b);
}
