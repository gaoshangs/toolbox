#include <stdio.h>
#include <string.h>

union Data{
    int a;
    float b;
    char str[20];
};

int main()
{
    union Data data;
    data.a = 10;
    printf("data.a = %d\n", data.a);

    data.b = 12.23;
    printf("data.b = %f\n", data.b);

    strcpy(data.str, "Hello World!");
    printf("data.str = %s\n", data.str);
}
