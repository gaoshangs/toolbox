#include <stdio.h>
const int NUMBER = 5;
float average(float *arr);

float average(float *arr)
{
    float sum, avg;
    int i;
    for(i = 0; i < NUMBER; i++)
    {
       sum += arr[i]; 
    }
    avg = sum/NUMBER;
    return avg;
}

int main()
{
    float scores[5], avg;
    int i;
    
    for(i = 0; i < NUMBER; i++)
    {
        scanf("%f", &scores[i]);
    }
    avg = average(scores);
    printf("avg is %5.2f\n", avg);
}
