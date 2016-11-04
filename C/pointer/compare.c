#include <stdio.h>
const int MAX = 3;

int main()
{
    int var[] = {10, 20, 30};
    int i = 0, *ptr;

    ptr = var;

    while(ptr <= &var[MAX-1])
    {
        printf("Address of var[%d] = %x\n", i, ptr);
        printf("Value of var[%d] = %d\n", i, *ptr);
        i++;
        ptr++;
    }
    return 0;
}
