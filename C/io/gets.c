#include <stdio.h>
int main()
{
    char *str1;
    char str2[100];
    printf("Put the first string:\n");
    gets(str1);

    printf("Put the second string:\n");
    gets(str2);

    printf("The first string:\n");
    puts(str1);

    printf("The second string:\n");
    puts(str2);

    return 0;
}
