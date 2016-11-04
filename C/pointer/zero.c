#include <stdio.h>
void nzp(float *a);
void nzp(float *a){
    int i;
    for(i = 0; i < 5; i++){
        if(a[i] < 0)
            a[i] = 0;
    }
}

int main(){
    float scores[5];
    int i;
    printf("Please input a number with space\n");

    for(i = 0; i < 5; i++){
        scanf("%f", &scores[i]);
    }

    for(i = 0; i < 5; i++){
        printf("%f\n", scores[i]);
    }

    printf("====\n");
    nzp(scores);

    for(i = 0; i < 5; i++){
        printf("%f\n", scores[i]);
    }
}
