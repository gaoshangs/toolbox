#include <stdio.h>
#include <string.h>

union Data{
    int a;
    float b;
    char c[20];
};

int main()
{
    union Data data;
    printf("Memory size :%lu\n", sizeof(data));
    return 0;
}
