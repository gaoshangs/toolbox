#include <stdio.h>
int main()
{
    int a = 10;
    int b = 32;
    double res;
    res = (double)b / a;
    printf("%d / %d = %lf\n", b, a, res);

    return 0;
}
