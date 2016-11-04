#include <stdio.h>
int main()
{
    int arr[] = {11, 22, 33, 44, 55};
    int *ptr;
    ptr = arr;
    printf("*ptr = %d\n", *ptr);
    printf("*ptr = %d\n", *ptr+1);

    return 0;
}
