#include <iostream>
using namespace std;
class Student{
    private:
        char const *name;
        int age;
    public:
        Student(){};
        Student(char const *, int);
        char const * getName() const;
        int getAge() const;
        void setName(char const *);
        void setAge(int);
};

Student::Student(char const* name, int age){
    this->name = name;
    this->age = age;
}

char const *Student::getName() const{
   return this->name; 
}

int Student::getAge() const{
   return this->age; 
}

void Student::setName(char const *name){
    this->name = name;
}

void Student::setAge(int age){
    this->age = age;
}

int main(){
    Student std1("小明", 25);
    cout << "姓名:"<< std1.getName()<<endl;
    cout << "年龄:"<< std1.getAge()<<endl;
    std1.setName("小花");
    std1.setAge(29);
    cout << "姓名:"<< std1.getName()<<endl;
    cout << "年龄:"<< std1.getAge()<<endl;
    const Student std2("小草", 20);
//    std2.setName("修改");//const的对象只能调用
    cout << "姓名:"<< std2.getName()<<endl;
    cout << "年龄:"<< std2.getAge()<<endl;
    return 0;
}
