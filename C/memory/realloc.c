#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[100];
    char *desc;

    strcpy(name, "Hi! is this Liming");
    
    desc = malloc(20 * sizeof(char));

    if( desc == NULL)
    {
        fprintf(stderr, "Error - can not allocate required memory\n");
    }
    else
    {
        strcpy(desc, "Yes! can I help you?");
    }

    realloc(desc , 100 * sizeof(char));
    if(desc == NULL)
    {
        fprintf(stderr, "Error - failed to realloc!\n");
    }
    else
    {
       strcat(desc, "Are you lilei? oh my god!!!"); 
    }

    printf("name : %s\n", name);
    printf("desc : %s\n", desc);
    return 0;
}
