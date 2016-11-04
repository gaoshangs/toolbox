#include <stdio.h>
int max(int, int);
int main()
{
    int a = 10, b = 20;
    int ret;
    ret = max(a, b);
    printf("The max number is %d\n", ret);
    return 0;
}
/*
int max(int num1, int num2)
{
    int result;
    if(num1 > num2)
        result = num1;
    else
        result = num2;
    return result;
}
*/
