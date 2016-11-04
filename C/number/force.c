#include <stdio.h>
int main()
{
  int sum = 17, count =5;
  double mean;
  double a;
  mean = (double) sum / count;
  a = sum / count;
  printf("sum / count = %d\n", sum/count);
  printf("Value of mean:%lf\nValue of a:%f\n", mean, a);
  return 0;
}
