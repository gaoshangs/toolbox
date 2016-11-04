#include <stdio.h>

int main(){
    char a[10] = {'a', 'b', 'c','d'}; 
    char b[] = {'a', 'b', 'c','d'}; 
    char c[] = "abcd"; 
    puts(a);
    puts(b);
    puts(c);
    printf("sizeof(a) = %lu\n", sizeof(a));
    printf("sizeof(b) = %lu\n", sizeof(b));
    printf("sizeof(c) = %lu\n", sizeof(c));
    printf("length of c = %lu\n", sizeof(c) -1);
    return 0;
}
