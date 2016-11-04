#include <stdio.h>
#include <ctype.h>

int main()
{
    int i=0 , j=0;
    char a[] = "nihao ma \nwohenhao";
    char b[] = "yexu zhejiu \tshi\nshangtian";

    while(!iscntrl((int)a[i]))
    {
        putchar(a[i]);
        i++;
    }

    while(!iscntrl((int)b[j]))
    {
        putchar(b[j]);
        j++;
    }
    return 0;
}
