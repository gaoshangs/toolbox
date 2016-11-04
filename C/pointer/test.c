#include <stdio.h>
int main()
{
    int a[] = {11, 21, 31, 41};
    int i, *p = a;
    //printf("*p++ = %d\n", *p++);
    *p++ = 3;
    for(i = 0; i < 4; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    printf("=========\n");
    *++p = 3;
    for(i = 0; i < 4; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}
