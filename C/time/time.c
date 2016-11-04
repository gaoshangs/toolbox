#include <stdio.h>
#include <time.h>
int main()
{
    time_t sec;
    sec = time(NULL);
    printf("自 1970-01-01 起的小时数 = %ld\n", sec);
    return 0;
}
