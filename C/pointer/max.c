#include <stdio.h>

int main()
{
    int *max, *min, *tmp, a, b;
    scanf("%d %d", &a, &b);
    max = &a;
    min = &b;
    if(*max < *min)
    {
        tmp = max;
        max = min;
        min = tmp;
    }
    printf("a:%d,b:%d,max:%d,min:%d", a, b, *max, *min);
    return 0;
}
