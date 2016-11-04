#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=1234;
    unsigned a1=1234;
    int b=0x7fffffff;
    int c=0x80000000;  // 0x80000000 = 0x7fffffff + 0x1
    int d=0xffffffff;
    unsigned e=0xffffffff;
    unsigned int t = 0x100000001;
    //unsigned long t = 0x100000001;
    printf("a=%d, a(u)=%u\n", a, a);
    printf("a1=%d, a1(u)=%u\n", a1, a1);
    printf("b=%d, b(u)=%u\n", b, b);
    printf("c=%d, c(u)=%u\n", c, c);
    printf("d=%d, d(u)=%u\n", d, d);
    printf("e=%d, e(u)=%u\n", e, e);
    printf("t=%u\n", t);
    return 0;
}
