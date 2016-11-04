#include <iostream>
using namespace std;

class Student{
    private:
        const char *name;
        int age;
        float score;
        static int num;
        static float sum;

    public:
        Student(const char *, int, float);
        void say();
        static float getAverage();
};

int Student::num = 0;
float Student::sum = 0;

Student::Student(const char *name, int age, float score){
   this->name = name;
   this->age = age;
   this->score = score;
   num++;
   sum += this->score;
}

void Student::say(){
    cout<<this->name<<"的年龄:"<<this->age<<",成绩:"<<this->score<<",当前的学生总数:"<<this->num<<endl;
}

float Student::getAverage(){
    return sum / num;
}

int main(){
    Student std1("小明", 25, 98.23f);
    std1.say();
    Student std2("小花", 26, 92.23f);
    std2.say();
    Student std3("小草", 27, 94.23f);
    std3.say();
    //cout <<"num :"<<Student::num<<endl;//私有静态变量不可以直接输出
    cout << "sum / num : "<<Student::getAverage()<<endl;
    return 0;
}
