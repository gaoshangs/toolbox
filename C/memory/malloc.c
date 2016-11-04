#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int num; 
    int i;
    char *string;
    printf("input a number,size of string\n");
    scanf("%d", &num);
    
    string = (char *)malloc(num * sizeof(char));
    for(i = 0;i < num;i++){
        string[i] = rand() % 26 + 'a';
    }
    printf("string = %s\n", string);
    return 0;
}
