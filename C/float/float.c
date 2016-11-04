#include <stdio.h>
#include <float.h>

int main()
{
    printf("The max of float = %.10E\n", FLT_MAX);
    printf("The min of float = %.10E\n", FLT_MIN);
    printf("精度为:%d\n", FLT_DIG);
    return 0;
}

