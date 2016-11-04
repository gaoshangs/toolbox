#include <stdio.h>
#include <locale.h>
#include <time.h>

int main()
{
    time_t currtime;
    struct tm *timer;
    char buffer[80];

    time(&currtime);
    timer = localtime(&currtime);


}
