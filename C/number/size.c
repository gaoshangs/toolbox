#include <stdio.h>
int main()
{
  short a = 10;
  int b = 100;
  long c = 1000;
  char d = 'X';
  int a_length = sizeof a;
  int b_length = sizeof(int);
  int bl = 100L;
  printf("a=%d, b=%d, c=%lu, d=%lu, bl=%ld\n", a_length, b_length, sizeof c, sizeof d, sizeof bl);
  return 0;
}
