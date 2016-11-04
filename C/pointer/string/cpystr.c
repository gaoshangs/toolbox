#include <stdio.h>

void cpystr( char *ps, char *pd);
void cpystr( char *ps, char *pd)
{
    while((*pd = *ps) != '\0')
    {
        pd++;
        ps++;
    }
}

int main()
{
    char pa[] = "Hello World Man!";
    char *pb;
    char str[100];
    pb = str;
    cpystr(pa, pb);
    printf("a = %s\nb = %s\n", pa, pb);

    return 0;
}
