#include <stdio.h>
const int MAX = 4; 
int main()
{
    int var[] = {10, 20, 30, 40};
    int *ptr;
    int i;
    
    ptr = var;

    for(i = 0; i < MAX; i++)
    {
        printf("Var Address of var[%d] = %x\n", i, &var[i]);
        printf("Ptr Address of var[%d] = %x\n", i, ptr);
        printf("value of var[%d] = %d\n", i, *ptr);
        ptr++;
    }
    return 0;
}
