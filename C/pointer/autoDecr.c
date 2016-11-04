#include <stdio.h>

const MAX = 3;

int main()
{
    int var[] = { 10, 20, 30};
    int *ptr, i;
    ptr = &var[MAX -1];

    for(i = MAX; i > 0; i--)
    {
        printf("Address of var[%d] = %x\n", i, ptr);
        printf("Value of var[%d] = %d\n", i, *ptr);
        ptr--;
    }
    return 0;
}
