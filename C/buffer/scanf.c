#include "stdio.h"
int main(void) 
{
    char n1[10]; 
    char n2[10];
    char n3,n4; 
    scanf("%s",n1); 
    scanf("%s",n2); 
    printf("n1=%s,n2=%s",n1,n2);
    //n3=getchar();      //n3读取了n2后面的那个回车字符并输出
    //printf("%c",n3);
    //n4=getchar();
    //printf("%c",n4); 
    return 0;
}
