#include <stdio.h>
#include <string.h>

int main()
{
    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    char t = 'l';
    strcpy(str3, str2);
    printf("str3=%s\n", str3);
    
    strcat(str1, str3);
    printf("str1=%s\n", str1);

    printf("length str1 = %lu\n", strlen(str1));
    
    printf("str2 compare str3 = %d\n", strcmp(str2, str3));
    printf("str2 compare str1 = %d\n", strcmp(str2, str1));

    printf("l in str1 = %s\n", strchr(str1, t));
    
    printf("str2 in str1 = %s\n", strstr(str1, str2));
    return 0;
}
