#include <stdio.h>
const int MAX = 5;
void format(int *numbers);

void format(int *numbers)
{
    int i;
    for(i = 0; i < MAX; i++)
    {
        if(numbers[i] < 0)
        {
            numbers[i] = 0;
        }
    }
    return ;
}

int main()
{
    int i;
    int arr[5];
    for(i = 0; i < MAX; i++)
    {
        scanf("%d", &arr[i]); 
    }

    printf("========\n");
    for(i = 0; i < MAX; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("========\n");
    format(arr); 
    for(i = 0; i < MAX; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}
