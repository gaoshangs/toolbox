#include <stdio.h>
int main()
{
    char *str1 = "nihaode";
    char str2[100] = {"ensw"};
    printf("the string1 :%s\n", str1);
    printf("the string1 *(str1+1) :%c\n", *(str1+1));
    printf("the string1 str1+1) :%s\n", str1+1);
    printf("the string1 str1[1] :%c\n", str1[1]);
    printf("the string2 :%s\n", str2);
    printf("the string2 :str2[1] %c\n", str2[1]);
    printf("the string2 :str2+1 %s\n", str2+1);
    printf("the string2 :*(str2+1) %c\n", *(str2+1));

    return 0;
}
