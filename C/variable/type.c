#include <stdio.h>
int g;
int x = 11;
int main()
{
    int a = 10, b = 5, c, x = 22;
    c = a + b;
    g = a - b;
    printf("a=%d,b=%d,c=%d,g=%d,x=%d\n", a, b, c, g, x);
    return 0;
}
