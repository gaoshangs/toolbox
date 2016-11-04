#include <stdio.h>
int main()
{
    int arr[] = {11, 21, 31, 41};
    int i =2, *p = arr;
    //下标法
    printf("arr[%d] = %d\n", i, arr[i]);
    printf("p[%d] = %d\n", i, p[i]);

    //指针法
    printf("*(arr+%d) = %d\n", i, *(arr+i)); 
    printf("*(p+%d) = %d\n", i, *(p+i)); 
    return 0;
}
