#include <stdio.h>
#define GET_ARRAY_LEN(array, len) len=(sizeof(array)/sizeof(array[0]));
int main(){
    int numbers[5];
    int len;
    long total;
    puts("请输入5个整数，已空格分隔");
    for(int i =0; i<5; i++){
        scanf("%d", &numbers[i]); 
    }
    GET_ARRAY_LEN(numbers, len);
    printf("len=%d", len);
    for(int i = 0; i< 5; i++){
        total+=numbers[i];
    }
    printf("total=%ld", total);
    return 0;
}
