#include <stdio.h>
void swap(int *x, int *y);
int main()
{
    int a = 200, b = 100;
    printf("处理前：\na:%d b:%d\n", a, b);
    swap(&a, &b);
    printf("处理后：\na:%d b:%d\n", a, b);
}
