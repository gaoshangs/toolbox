#include <stdio.h>
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n' 
int main()
{
    int area;
    int distance;
    area = LENGTH * WIDTH;
    distance = LENGTH - WIDTH;
    printf("value of area : %d", area);
    printf("%c", NEWLINE);
    printf("value of distance : %d", distance);
    return 0;
}
