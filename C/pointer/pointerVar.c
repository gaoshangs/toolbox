#include <stdio.h>
int main()
{
    int i, j, *p1, *p2;
    i = 10;
    j = 20;
    p1 = &i;
    p2 = &j;
    
    printf("one:\n");
    printf("i:%d\n", i);
    printf("j:%d\n", j);
    printf("p1:%d\n", *p1);
    printf("p2:%d\n", *p2);
/*
    p2 = p1;

    printf("two:\n");
    printf("i:%d\n", i);
    printf("j:%d\n", j);
    printf("p1:%d\n", *p1);
    printf("p2:%d\n", *p2);
*/
    *p2 = *p1;

    printf("two:\n");
    printf("i:%d\n", i);
    printf("j:%d\n", j);
    printf("p1:%d\n", *p1);
    printf("p2:%d\n", *p2);
    return 0;
}
