#include <stdio.h>
int main()
{
  float a = 128.101;
  double b = 128.101;
  float c = 128.101f;
  float d = 1.23002398f;
  double e = 1.2312343534543;
  double x = 1234;
  float y = 125.5;
  printf("a=%f\nb=%lf\nc=%f\nd=%f\ne=%lf\nx=%lf\ny=%f\n", a, b, c, d, e, x, y);
  printf("d=%0.10f\n", d);
  printf("e=%0.19f\n", e);
  return 0;
}
