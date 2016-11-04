#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
    time_t start_t, end_t;
    double diff_t;
    printf("开始：\n");
    time(&start_t);
    printf("休息5秒...\n"); 
    sleep(5);
    time(&end_t);
    printf("结束...\n");
    printf("耗时:%lf", difftime(end_t, start_t));

    return 0;
}
