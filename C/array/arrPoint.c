#include <stdio.h>
int main()
{
    double arr[5] = {10.5, 11.5, 12.5, 13.5, 14.5};
    double *p;
    p = arr;
    int i ;
    for(i = 0; i < 5; i++)
    {
        printf("*(p+%d) = %lf\n", i, *(p + i));
    }

    for(i = 0; i < 5; i++)
    {
        printf("*(arr+%d) = %lf\n", i, *(arr +i));
    }
}
