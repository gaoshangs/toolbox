#include <stdio.h>
#include <time.h>

void getSeconds(unsigned long *par);

int main()
{
    unsigned long sec;
    getSeconds(&sec);
    printf("Value of sec = %lu\n", sec);
}

void getSeconds(unsigned long *par)
{
    printf("Address of *par = %x\n", par);
    *par = time(NULL);
    return;
}
