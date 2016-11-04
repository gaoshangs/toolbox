#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("/tmp/t.txt", "a+");
    fputs("Hi boy!\n", fp);
    fprintf(fp, "Yeah, Girl!\n");
    fclose(fp);
    return 0;
}
