#include <stdio.h>
int main()
{
    int x = 1, y, *px = &x;
    y = *px + 5;
    printf("x=%d,*px=%d,y=%d\n", x, *px, y);
    y = *px++;
    printf("x=%d,*px=%d,y=%d\n", x, *px, y);
}
