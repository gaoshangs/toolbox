#include <stdio.h>
#include <time.h>

int main()
{
    time_t timer;//这里timer不能为指针类型，会报错
    struct tm *buffer;
    char ftime[80];//格式化后的字符串,这里的字符串不能为指针，因为strftime中有大小的限制

    time(&timer);
    printf("当前的时间戳：%lu\n", timer);

    buffer = localtime(&timer);
    strftime(ftime, 80, "%Y-%m-%d %H:%M:%S", buffer);
    printf("当前的时间为：%s\n", ftime);
    return 0;
}
