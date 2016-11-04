#include <stdio.h>
#include <ctype.h>

int main()
{
    int var1 = 'a';
    int var2 = '2';
    int var3 = ' ';
    int var4 = '\n';

    isdigit(var1) ? printf("var1 = %c 是十进制数字\n", var1) :  printf("var1 = %c 不是十进制数字\n", var1) ;
    isdigit(var2) ? printf("var2 = %c 是十进制数字\n", var2) :  printf("var2 = %c 不是十进制数字\n", var2) ;
    isdigit(var3) ? printf("var3 = %c 是十进制数字\n", var3) :  printf("var3 = %c 不是十进制数字\n", var3) ;
    isdigit(var4) ? printf("var4 = %c 是十进制数字\n", var4) :  printf("var4 = %c 不是十进制数字\n", var4) ;
    return 0;
}
