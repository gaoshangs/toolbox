#include <stdio.h>
int main()
{
    int a = 10;
    int *p1;
    p1 = &a;
    printf("Address of a : %X\n", &a);
    printf("Address of p1: %X\n", p1);
    printf("Value of a : %d\n", a);
    printf("Value of *p1 : %d\n", *p1);

    int b = 20;
    int *p2 = &b;
    printf("Address of b : %X\n", &b);
    printf("Address of p2: %X\n", p2);
    printf("Value of b : %d\n", b);
    printf("Value of *p2 : %d\n", *p2);

    return 0;
}
