#include <iostream>
using namespace std;
class Student{
    public:
        Student(const char *, int, float);
        ~Student();
        void say();
        
    private:
        const char *name;
        int age;
        float score;
};

Student::Student(const char * name1, int age1, float score1):name(name1), age(age1), score(score1){
    say();
}

Student::~Student(){
    cout <<"再见"<<name<<endl;
}
void Student::say(){
    cout <<name<<"同学的年龄："<<age<<",成绩是："<<score<<endl;
}

int main(){
    Student std1("小明", 25, 98.23);
    Student std2("小红", 26, 78.23);
    Student std3("小花", 25, 88.23);
    return 0;
}
