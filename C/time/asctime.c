#include <stdio.h>
#include <time.h>
int main()
{
    struct tm currtime;
    currtime.tm_year = 116;
    currtime.tm_mon = 4;
    currtime.tm_mday = 30;
    currtime.tm_hour = 16;
    currtime.tm_min = 4;
    currtime.tm_sec = 40;
    printf("格式化的时间为：%s\n", asctime(&currtime));
    return 0;
}
