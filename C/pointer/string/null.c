#include <stdio.h>
int main()
{
    char a = '\0';
    char b = ' ';
    char c = '0';
    char d = 0;
    char *e = "0";
    printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, *e);
}
