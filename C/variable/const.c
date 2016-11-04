#include <stdio.h>
int main()
{
    const int LENGTH = 10;
    const int WIDTH = 5;
    const char NEWLINE = '\n';
    int area;
    int distance;
    area = LENGTH * WIDTH;
    distance = LENGTH - WIDTH;
    printf("value of area: %d", area);
    printf("%c", NEWLINE);
    printf("value of distance: %d", distance);
}
