#include <stdio.h>

int main()
{
    char a[] = "hello boy!";
    char *b = "test boy!";
    a[1] = 'b';
    printf("a = %s\nb = %s\n", a, b);
    return 0;
}
