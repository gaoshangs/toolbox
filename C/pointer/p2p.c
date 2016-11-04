#include <stdio.h>
int main()
{
    int a = 100;
    int *b = &a;
    int **c = &b;
    printf("a = %d\nb = %d\nc = %d\n", a, *b, **c);
}
