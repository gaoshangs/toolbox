#include <stdio.h>
//函数声明
int func();
int main()
{
    //函数调用
    int i = func();
    printf("i:%d", i);
}
//函数定义
int func()
{
    return 123;
}
