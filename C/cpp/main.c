#include <stdio.h>
#include "max.h"
#include "max.h"
#ifndef MESSAGE
    #define MESSAGE "Miss You!"
#endif

#ifdef MESSAGE
    #undef MESSAGE
    #define MESSAGE "I Miss You!"
#endif

#if !defined(HIGHT)
    #define HIGHT "I am Hight"
#endif

void smile()
{
    printf("This is smile function!\n");
}
#define message_for(a, b)\
    printf(#a " AND " #b ": We Miss You!\n");

#define token_trans(n)\
    printf("token"#n" = %d\n", token##n);
#define least(a,b) (a > b? b : a)

int main()
{
#if 3 > 4
   printf("Yes! 3 > 4\n"); 
#else
    printf("No! 3 < 4\n");
#endif
    int token34 = 40;
    int a = 10;
    int b = 20;
    max(); 
    printf("%s\n", MESSAGE);
    printf("%s\n", HIGHT);
    printf("__DATE__: %s\n", __DATE__);
    printf("__TIME__: %s\n", __TIME__);
    printf("__FILE__: %s\n", __FILE__);
    printf("__LINE__: %d\n", __LINE__);
    printf("__STDC__: %d\n", __STDC__);
    message_for(GOOD, BOY);
    token_trans(34);
    smile();
    printf("Least between %d and %d: %d", a, b, least(a, b));
    return 0;
}
