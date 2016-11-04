#include <stdio.h>
#include <assert.h>

int main()
{
    int a;
//    char b[50];
    char *b;

    printf("请输入一个整数\n");

    scanf("%d", &a);
    assert(a >= 10);
    printf("您输入的整数为：%d\n", a);

    printf("请输入一个字符串\n");
    scanf("%s", b);
    assert(b != NULL);
    printf("您输入的字符串为：%s\n", b);
    return 0;
}
