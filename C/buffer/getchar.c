#include <stdio.h>
int main()
{
  char c;
  //c = getchar();
  //printf("%c", c);
//  printf("%c\n",c);
  while((c=getchar()) != '\n')
  {
    printf("%c", c);
  }
  printf("\n");
  /*
  char a;
  char b;
  a = getchar();
  b = getchar();
  c = getchar();
  printf("%d %d %d", a, b, c);
  */
  return 0;
}
