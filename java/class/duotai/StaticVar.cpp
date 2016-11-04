#include <iostream>
using namespace std;
class StaticVar{
    public:
        static int i;
        int j;
};
int StaticVar::i = 0;

int main(){
    StaticVar sta1;
    sta1.i = 10;
    sta1.j = 20;
    cout<<"i = "<<sta1.i<<", j="<<sta1.j<<endl;

    StaticVar sta2;
    cout<<"i = "<<sta2.i<<", j="<<sta2.j<<endl;

    return 0;
}
