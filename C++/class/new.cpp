#include <iostream>
using namespace std;

class Demo{
    public:
        Demo();
        ~Demo();
};

Demo::Demo(){
    cout<<"Construct"<<endl;
}

Demo::~Demo(){
    cout<<"Destruct"<<endl;
}

int main(){
    cout<<"-----new----"<<endl;
    Demo *p1 = new Demo;
    Demo *p2 = new Demo[5];

    cout<<"----malloc---"<<endl;
    Demo *p3 = (Demo *)malloc(sizeof(Demo));

    cout<<"----destruct---"<<endl;
    delete p1;
    delete[] p2;    
    cout<<"---free---"<<endl;
    free(p3);
    return 0;
}
