#include <stdio.h>
int main()
{
    char str1[] = "Hello World1";
    char str2[] = {"Hello World2"};
    printf("str1=%s\nstr2=%s\n", str1, str2);
    str1[0] = '1';
    str2[0] = '2';
    printf("str1=%s\nstr2=%s\n", str1, str2);
    return 0;
}
