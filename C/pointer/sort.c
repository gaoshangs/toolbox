#include <stdio.h>
int main()
{
    int *tmp, *max, *min, a, b;
    scanf("%d%d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    max = &a;
    min = &b;
    if(*max < *min)
    {
        tmp = max;
        max = min;
        min = tmp;
    }
    printf("a = %d, b = %d\n", a, b);
    printf("*max = %d, *min = %d\n", *max, *min);
}
