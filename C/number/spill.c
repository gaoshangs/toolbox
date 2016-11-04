#include <stdio.h>
int main()
{
  unsigned short a = 100, b = 0x10000;
  long c = 0x10, d = 0x10000;
  printf("a = %d, b = %d", a, b);
  printf("c = %hd, d = %hd", c, d);
  return 0;
}
