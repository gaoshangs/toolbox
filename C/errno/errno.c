#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    FILE *fp;
    fp = fopen("a.txt", "r+");
    if(fp ==NULL)
    {
        fprintf(stderr, "ERROR:the errno is %d\n", errno);
        fprintf(stderr, "ERROR:the error is %s\n", strerror(errno));
    }
    else
    {
        fclose(fp);
    }

    return 0;
}
