#include <stdio.h>
int main()
{
    char str[10], *ps;
    int i;
    ps = str;
    scanf("%s", ps);
    for(i = 0; i < 10; i++)
    {
        printf("%c\n", ps[i]);
    }

    return 0;
}
