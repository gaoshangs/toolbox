#include <stdio.h>
#include <time.h>
#include <limits.h>

int main()
{
    clock_t start_t, end_t, total_t;
    long i;
    FILE *fp;
    
    start_t = clock();
    printf("程序启动,start_t = %ld\n", start_t);
    fp = fopen("tmp.txt", "w+");
    printf("开始一个大循环,start_t = %ld\n", start_t);
    for(i = 0; i< 10000000; i++)
    {
        fprintf(fp, "%ld\n", i); 
    }
    fclose(fp);
    end_t = clock();
    printf("大循环结束，end_t = %ld\n", end_t);
    printf("CLOCKS_PER_SEC:%d\n",CLOCKS_PER_SEC);
    total_t = ((double)(end_t - start_t)) /CLOCKS_PER_SEC;
    printf("CPU 占用的总时间：%lf\n", (double)total_t);
    printf("程序退出...\n");

    return 0;


}
