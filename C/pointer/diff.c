#include <stdio.h>
int main()
{
    int a = 12;
    int *p;
    p = &a;
    printf("Addres of a=%X\n", &a);
    printf("Addres of *p=%X\n", p);
    printf("Addres of &*p=%X\n", &*p);
    printf("Value of a=%d\n", a);
    printf("Value of *&a=%d\n", *&a);
}
