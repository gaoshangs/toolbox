#include <stdio.h>
int main()
{
   int a[5] = { 11, 12, 13, 14, 15};
   int i, *p = a;
   printf("*p = %d\n", *p);

   for(i = 0; i < 5; i++)
   {
     printf("a[%d] = %d,", i, a[i]);
     printf("*(p+%d) = %d\n", i, *(p+i));
   }
   p +=1;
   printf("*p = %d\n", *p);
   return 0;
}
