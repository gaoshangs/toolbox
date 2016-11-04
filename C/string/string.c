#include <stdio.h>
int main()
{
    char greeting[6] = {'H', 'e', 'l', 'l', 'o','a', 'a'};
    char a[] = "123456";
    printf("%s\n", greeting);
    printf("%lu\n", sizeof(a));
    return 0;
}
