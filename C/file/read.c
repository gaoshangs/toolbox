#include <stdio.h>
/*
Hi boy!
Yeah,Girl!
Hi boy!
*/
int main()
{
    FILE *fp;
    char buff[255];

    fp = fopen("/tmp/t.txt", "r"); 
    printf("1: fgetc = %c\n", fgetc(fp));//H 

    fgets(buff, 255, fp);
    printf("2: fgets = %s\n", buff);//i boy!\n 遇到\n就中断同时\n会输出

    fscanf(fp, "%s", buff);//Yeah,Girl! 遇到\n或空格就中断同时\n或空格不会输出
    printf("3: fscanf = %s\n", buff);
    
    fscanf(fp, "%s", buff);//Hi
    printf("4: fscanf = %s\n", buff);

    fclose(fp);

    return 0;
}
