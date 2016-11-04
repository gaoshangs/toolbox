#include <stdio.h>
#include <errno.h>
#include <string.h>

int errno;

int main()
{
    FILE *fp;
    int errnum;

    fp = fopen("a.txt", "r+");
    if(fp == NULL)
    {
        errnum = errno;
        fprintf(stderr, "打开a.txt失败,错误码为：%d\n", errnum);
        perror("打开文件失败");
        fprintf(stderr, "文件操作错误：%s\n", strerror(errnum));
    }
    return 0;
}
