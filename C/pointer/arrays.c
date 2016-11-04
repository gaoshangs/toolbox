#include <stdio.h>

int main(){
    char str[20] = "www.coderbbs.com";

    char *s1 = str;
    char *s2 = str+4;

    char c1 = str[4];
    char c2 = *str;
    char c3 = *(str+4);
    char c4 = *str+2;
    char c5 = (str+1)[5];

    int num1 = *str+2;
    long num2 = (long)str;
    long num3 = (long)(str+2);

    printf("  s1 = %s\n", s1);//"www.coderbbs.com"
    printf("  s2 = %s\n", s2);//"coderbbs.com"

    printf("  c1 = %c\n", c1);//"c"
    printf("  c2 = %c\n", c2);//"w"
    printf("  c3 = %c\n", c3);//"c"
    printf("  c4 = %c\n", c4);//"y"
    printf("  c5 = %c\n", c5);//

    printf("num1 = %d\n", num1);//121
    printf("num2 = %ld\n", num2);//
    printf("num3 = %ld\n", num3);//

    return 0;
}
