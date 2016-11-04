#include <stdio.h>
#include <time.h>

int main()
{
    time_t *timer;
    struct tm *buffer;
    char *currtime;

    time(timer);//先得到时间戳
    printf("当前的时间戳为：%ld\n", *timer);

    buffer = localtime(timer);//在得到tm数据类型的结构体

    currtime = asctime(buffer);//返回时间的字符串
    printf("当前时间为：%s\n", currtime);

    return 0;
}
