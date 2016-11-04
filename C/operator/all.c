#include <stdio.h>
int main()
{
    int a = 21, b = 10, c;
    c = a + b;
    printf("Line 1 - c 的值是 %d\n", c);
    c = a - b;
    printf("Line 2 - c 的值是 %d\n", c);
    c = a * b;
    printf("Line 3 - c 的值是 %d\n", c);
    c = a / b;
    printf("Line 4 - c 的值是 %d\n", c);
    c = a % b;
    printf("Line 5 - c 的值是 %d\n", c);
    c = a++;
    printf("Line 6 - c 的值是 %d\n", c);
    c = a--;
    printf("Line 7 - c 的值是 %d\n", c);
}
