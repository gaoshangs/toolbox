#include <stdio.h>

int main()
{
    char a[100];
    int b;
    printf("Enter a string and a number\n");
    scanf("%s %d", a, &b);
    printf("a = %s, b = %d", a, b);

    return 0;
}
