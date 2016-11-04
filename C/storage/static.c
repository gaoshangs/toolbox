#include <stdio.h>
static int a = 5;//全局静态变量
void func()
{
    int b = 5;//局部变量
    static int c = 5;//局部静态变量
    b++;
    c++;
    printf("a = %d,b = %d,c = %d\n", a, b, c);
    return ;
}

int main()
{
    while(a--)
        func();
    return 0;
}
