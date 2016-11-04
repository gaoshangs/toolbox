#include <iostream>
using namespace std;
class Array{
    public:
        Array(const char *name1, int age1):SEX('M'){
            name = name1;
            age = age1;
        }
        const char* getName();
        int getAge();
        const char getSex();
    private:
        const char *name;
        int age;
        const char SEX;
};

const char* Array::getName(){
    return name;
}

int Array::getAge(){
    return age;
}

const char Array::getSex(){
    return SEX;
}

int main(){
    Array arr1("小明", 27);
    cout << arr1.getName() << "的性别:" << (arr1.getSex() == 'M' ? "男生" : "女生") << ", 年龄是:"<< arr1.getAge()<<endl;
    return 0;
}
