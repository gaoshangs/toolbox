#include <stdio.h>
namespace Li{
    int flag = 1;
    class Student{
        public :
            char *name;
            int age;
            float score;
        public :
            void say(){
                printf("%s的年龄是：%d,成绩为：%.2f\n", name, age, score); 
            }
    };
}

namespace Wong{
    bool flag = true;
}

int main(){
    using namespace Li;
    class Student std1;
    std1.name = "张三";
    std1.age = 29;
    std1.score = 89.45;
    std1.say();
    printf("Li::flag = %d\n", flag);

    Wong::flag = false;
    printf("Wong::flag = %d\n", Wong::flag);
    return 0;
}
