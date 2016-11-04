#include <stdio.h>
double average(int *arr, int size);

int main()
{
    int arr[5] = {10, 11, 12, 13, 14};
    double avg;
    avg = average(arr, 5);
    printf("The average is %lf\n", avg);
    return 0;
}

double average(int arr[], int size)
{
    int i;
    double avg;
    double sum;
    for(i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    avg = sum / size;
    return avg;
}
