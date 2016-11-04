#include <stdio.h>
int main()
{
    int a = 10;
    short b;
    double c;
    int *prc;
    
    printf("变量a的大小是：%lu\n", sizeof(a));
    printf("变量b的大小是：%lu\n", sizeof(b));
    printf("变量c的大小是：%lu\n", sizeof(c));
    
    prc = &a;
    printf("变量a的值是：%d\n", a);
    printf("变量prc的值是：%d\n", *prc);
    /*三元运算符*/ 
    a = 10;
    b = (a == 1) ? 20 : 30;
    printf ("变量b的值是%d\n", b);

    b = (a == 10) ? 20 : 30;
    printf ("变量b的值是%d\n", b);
}
