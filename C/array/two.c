#include <stdio.h>
int main()
{
    int i, j;
    int a[5][2] = {
        {1,2},
        {3,4},
        {5,6},
        {7,8}
    };

    for(i = 0; i< 5; i++)
    {
        for(j = 0; j< 2; j++)
        {
            printf("a[%d][%d] value is %d\n", i, j, a[i][j]);
        }
    }
    return 0;
}
