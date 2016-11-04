#include <stdio.h>

void nzp(int *a){
    int i;
    for(i=0; i<5; i++){
        if(a[i]<0) a[i]=0;  //小于0的元素，赋值为0
    }
}

int main(){
    int b[5], i;
    printf("Input 5 numbers:\n");
    for(i=0; i<5; i++)
        scanf("%d", &b[i]);
    printf("Initial values of array b are: ");
    for(i=0; i<5; i++)
        printf("%d ", b[i]);
    nzp(b);
    printf("\nFinal values of array b are: ");
    for(i=0; i<5; i++)
        printf("%d ",b[i]);

    return 0;
}
