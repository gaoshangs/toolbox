#include <stdio.h>
#include <time.h>

int main()
{
    time_t timer;
    struct tm *buffer;
    char nowtime[50];
    time_t newtimer;
    
    time(&timer);
    printf("当前的时间戳为：%lu\n", timer);

    //根据日历时间获取tm结构
    buffer = localtime(&timer);
    strftime(nowtime, 50, "%Y-%m-%d %H:%M:%S", buffer);
    printf("当前的时间为：%s\n", nowtime);

    //根据tm结构得到时间戳
    newtimer = mktime(buffer);
    printf("时间转时间戳为：%lu\n", newtimer);
    return 0;
}
