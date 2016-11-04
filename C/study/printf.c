#include <stdio.h>
int main()
{
  printf("a\n");
  int a = 123;
  printf("%d\n", a);
  a = 1;
  int b = 2;
  int c = 3;
  printf("a=%d, b=%d, c=%d\n", a, b, c);
  printf("The chr is %c",100);
  printf("\n");
  float e = 1234.56;
  printf("float is %f", e);
  printf("\n");
  a = 17;
  printf("decimal:%d \n noctal:%o \n hexadecimal:%x\n", a, a, a);
  return 0;
}
