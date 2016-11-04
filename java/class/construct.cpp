#include <iostream>
using namespace std;
class construct{
    public:
        const char *name;
        int age;
    public:
        construct(const char *, int);
        void hungry();
};

construct::construct(const char *name1, int age1):name(name1),age(age1){
    cout<<"主人你好，我叫"<<name<<",今年"<<age<<"岁了"<<endl;
}

void construct::hungry(){
    cout<<"主人,"<<name<<"饿^_^"<<endl;
}

int main(){
    construct dog1("小花", 2);
    dog1.hungry();
    return 0;
}
