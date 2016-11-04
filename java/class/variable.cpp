#include <iostream>
using namespace std;

class variable{
    public:
        static int total;
    public:
        variable();
        static void test();
};
int variable::total = 0;

variable::variable(){
    total++;
}

void variable::test(){
    cout<<"total="<<total<<endl;
}

int main(){
    variable var1;
    variable var2;
    variable var3;
   // variable var2 = new variable();
   // variable var3 = new variable();
    variable::test();
}
