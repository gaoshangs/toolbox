#include <stdio.h>
#include <string.h>

char *longstr(char *str1, char *str2)
{
    if(strlen(str1) >= strlen(str2)){
        return str1;
    } else{
        return str2;
    }
}

int main()
{
   char *a = "nishishui";
   char *b = "nixuyao caiyixia ";
   char *c = longstr(a, b);
   printf("c = %s\n", c);
}
