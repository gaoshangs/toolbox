#include <stdio.h>
#include "extern.h"
int count;
void show();
void show2();
const int NUM = 123;

int main()
{
    count = 5;
    count++;
    show();
    show2();
    return 0;
}

void show2()
{
    printf("show2 count= %d", count);
    return ;
}
