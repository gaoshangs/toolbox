#include <stdio.h>
#include <ctype.h>

int main()
{
    int var1 = 'a';
    int var2 = '2';
    int var3 = ' ';
    int var4 = '\n';

    isalpha(var1) ? printf("var1 = %c 是字母\n", var1) :  printf("var1 = %c 不是字母\n", var1) ;
    isalpha(var2) ? printf("var2 = %c 是字母\n", var2) :  printf("var2 = %c 不是字母\n", var2) ;
    isalpha(var3) ? printf("var3 = %c 是字母\n", var3) :  printf("var3 = %c 不是字母\n", var3) ;
    isalpha(var4) ? printf("var4 = %c 是字母\n", var4) :  printf("var4 = %c 不是字母\n", var4) ;
    return 0;
}
