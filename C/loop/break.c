#include <stdio.h>
int main()
{
    int a = 10;
    while(a < 15)
    {
        for( int i = 0; i < 5; i++)
        {
            if(i >=2)
            {
                break;
            }
            printf("for 的第%d次循环\n", i);
        }
        printf("a 的值：%d\n", a);
        a++;
    }
}
