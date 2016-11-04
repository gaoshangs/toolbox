#include <stdio.h>
#include <stdlib.h>

int main(){
    int year, month, days=0;
    puts("请输入年份:");
    scanf("%d", &year);
    puts("请输入月份:");
    scanf("%d", &month);
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        case 2:
            days = year % 4 == 0 ? 29 : 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            exit(0);
    }
    printf("%d年%d月共计%d天", year, month, days);
}
