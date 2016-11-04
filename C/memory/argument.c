#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("The program is : %s\n", argv[0]);
    if(argc == 2)
    {
        printf("The argument is %s\n", argv[1]);
    }
    else
    {
        printf("The number of argument is wrong\n");
    }
    return 0;
}
