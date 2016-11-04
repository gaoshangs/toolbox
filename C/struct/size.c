#include <stdio.h>
#include <string.h>

struct
{
    int a;
    int b;
} status1;

struct
{
    int a:1;
    int b:1;
} status2;

struct
{
    int a:1;
    int b:5;
} status3;

struct
{
    int a:32;//当为33时会编译失败，超过了int占有的4个字节数
} status4;

int main()
{
    printf("Memory size :%lu\n", sizeof(status1));
    printf("Memory size :%lu\n", sizeof(status2));
    printf("Memory size :%lu\n", sizeof(status3));
    printf("Memory size :%lu\n", sizeof(status4));
    return 0;
}
