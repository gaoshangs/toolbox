#include <stdio.h>
const int MAX = 3;
int main()
{
    char * names[] = {//字符串数组的表示
        "zhangsan",
        "lisi",
        "wangwu"
    };

    char *color = "red";//字符串及为字符数组+指针
    int i;
    printf("color: %s\n", color);
    printf("color: %c\n", *color);
    
    for(i = 0; i < MAX; i++)
    {
        printf("Value of names[%d] = %s\n", i, names[i]);
        printf("Value of names[%d] = %c\n", i, * names[i]);
    }
    return 0;
}
