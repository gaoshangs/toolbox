#include <stdio.h>

const int MAX = 3;

int main()
{
    int var[] = {10, 20, 30};
    int i, *ptr[MAX];

    for(i = 0; i < MAX; i++)
    {
        ptr[i] = &var[i];
    }
    for(i = 0; i < MAX; i++)
    {
        printf("Value of var[%d] = %d\n", i, *ptr[i]);
    }
    return 0;
}
