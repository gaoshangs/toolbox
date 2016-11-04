#include <stdio.h>
int main()
{
    printf("int 存储大小:%lu", sizeof(int));
    printf("unsigned int 存储大小:%lu", sizeof(unsigned int));
    printf("float 存储大小:%lu", sizeof(float));
    printf("double 存储大小:%lu", sizeof(double));
    return 0;
}
