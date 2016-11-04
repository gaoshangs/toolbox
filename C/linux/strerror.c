#include <string.h>
#include <errno.h>
#include <stdio.h>
int main(int argc, char ** argv)
{
    int i = 0;
    for(i = 0; i < 256; i++)
        printf("error.%02d is: %s\n", i, strerror(i));
    return 0;
}
