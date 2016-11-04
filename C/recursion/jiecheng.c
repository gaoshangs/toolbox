#include <stdio.h>

long unsigned factorial(int unsigned i)
{
    if(i <= 1)
        return 1;
    return i*factorial(i -1);
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("factorial(%d) = %lu", a, factorial(a)); 

    return 0;
}
