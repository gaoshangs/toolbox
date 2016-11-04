#include <stdio.h>
#include <string.h>
int main(){
    //chr s[] = "a b-c_d;xx:y:y_zz"; 
    char s[] = "abc##123###a##b";
    char de[] = "##";
    char *p;
    //char *arr[10];
    printf("first:%s\n",(p = strtok(s, de)));
//    arr[0] = p;
    int a = 1;
    while((p = strtok(NULL,de))){
        printf("second:%s, %s\n", p, de); 
       // arr[a] = p;
       // a++;
    }

   // for(int i = 0; i < 10; i++){
   //     printf("arr[%d] = %s\n", i, arr[i]); 
   // }
    return 0;
}
