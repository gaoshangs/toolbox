#include <stdio.h>
#include <string.h>

int main(){
    //char a[];// char a[50] = "aaaa";
    //char b[50];// char b[50] = "bbb";
    char *c;
    char d[10];
    char *strArr[] = {"aa", "bb", "cc"};
  //  a = "aaa";
  //  b = "bbb";
    c = "ccc";
    strcpy(d, "123456789");//这里不能包含10个字节因为字符的末尾会增加\0占用一个字节
 //   printf("a = %s", a);
 //   printf("b = %s", b);
    printf("c = %s\n", c);
    printf("d = %s\n", d);
    printf("strArr = %s\n", *strArr);
    printf("sizeof(strArr) = %lu\n", sizeof(strArr));
    for(int i = 0; i<3; i++){
        printf("strArr[%d] = %s\n", i, strArr[i]);
    }
    return 0;
}
