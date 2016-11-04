#include <stdio.h>
int main()
{
    int a = 5;
    int *p1 = &a;
    int *p2 = p1;
    printf("a = %d, *p1 = %d, *p2 = %d\n", a, *p1, *p2);
    //printf("p1 = %d, p2 = %d\n", p1, p2);
    int arr[5], *p3 = arr, *p4 = &arr[0];
    printf("arr[0] = %d, *p3 = %d, *p4 = %d\n", arr[0], *p3, *p4);
    
    char *str;
    str = "Hello World";
    printf("*str = %c, str= %s\n", *str, str);
    return 0;
}
