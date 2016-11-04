#include <stdio.h>
void change(int *a, int *b);

void change(int *a, int *b)
{
    int temp;
    if(*a < *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    return ;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    change(&a, &b);
    printf("a = %d, b = %d\n", a, b);
}
