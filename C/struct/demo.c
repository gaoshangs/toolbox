#include <stdio.h>
int main()
{
    struct student{
        char *name;
        //char name[50];
        int age;
        float score;
    };

    char a[50];
    a = ['a', 'b', 'c'];
    printf("a= %s\n", a);
    struct student xm;
    xm.name = "xiaoming";
    xm.age = 23;
    xm.score = 98.9;
    printf("name = %s\n", xm.name);
    printf("age = %d\n", xm.age);
    printf("score = %f\n", xm.score);
    return 0;
}
