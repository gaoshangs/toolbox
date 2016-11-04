#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    double c;

    scanf("%d%d", &a, &b);
    if(b == 0)
    {
        fprintf(stderr, "b can no be 0\n");
        exit(-1);
    }

    c = a / b;
    fprintf(stdout, "a / b = %lf\n", c);
    exit(0);
}
