#include <stdio.h>
#include <ctype.h>

int main()
{
    int var1 = 'a';
    int var2 = '2';
    int var3 = ' ';
    int var4 = '\n';
    int var5 = ',';

    isgraph(var1) ? printf("var1 = |%c| 是图形字符\n", var1) :  printf("var1 = |%c| 不是图形字符\n", var1) ;
    isgraph(var2) ? printf("var2 = |%c| 是图形字符\n", var2) :  printf("var2 = |%c| 不是图形字符\n", var2) ;
    isgraph(var3) ? printf("var3 = |%c| 是图形字符\n", var3) :  printf("var3 = |%c| 不是图形字符\n", var3) ;
    isgraph(var4) ? printf("var4 = |%c| 是图形字符\n", var4) :  printf("var4 = |%c| 不是图形字符\n", var4) ;
    isgraph(var5) ? printf("var5 = |%c| 是图形字符\n", var5) :  printf("var5 = |%c| 不是图形字符\n", var5) ;
    return 0;
}
