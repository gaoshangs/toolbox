#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int a = 0;  // 全局初始化区（④区）
char *p1;  // 全局未初始化区（③区）

int main()
{
    int b;  // 栈区
    char s[] = "abc";  // 栈区
    char *p2;  // 栈区
    char *p3 = "123456"; // 123456\0 在常量区（②），p3在栈上，体会与 char s[]="abc"; 的不同
    static int c = 0;  // 全局初始化区
    p1 = (char *)malloc(10),  // 堆区
       p2 = (char *)malloc(20);  // 堆区

    // 123456\0 放在常量区，但编译器可能会将它与p3所指向的"123456"优化成一个地方
    strcpy(p1, "123456");
}

