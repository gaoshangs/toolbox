#include <stdio.h>
#ifndef EXTERN_H
    #define EXTERN_H
extern int count;
extern void show();
extern const int NUM;
void show()
{
    printf("const NUM :%d\n", NUM);
    printf("count is %d\n", count);
    return ;
}

#endif
