#include <stdio.h>

struct bs{
    unsigned a:1;
    unsigned b:3;
    unsigned c:4;
} bit, *pbit;

int main()
{
    bit.a = 1;
    bit.b = 7;
    bit.c = 15;
    printf("bit.a = %d\n", bit.a);
    printf("bit.b = %d\n", bit.b);
    printf("bit.c = %d\n", bit.c);

    pbit = &bit;
    
    pbit->b &= 3;
    pbit->b |= 8;

    printf("pbit->a = %d\n", pbit->a);
    printf("pbit->b = %d\n", pbit->b);
    printf("pbit->c = %d\n", pbit->c);
    return 0;
}
