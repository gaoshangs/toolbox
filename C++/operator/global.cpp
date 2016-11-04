#include <iostream>
using namespace std;

class Plus{
    private:
        double real;
        double imag;
    public:
        Plus(): real(0.00), imag(0.00){}
        Plus(double real, double imag): real(real), imag(imag){}
        friend Plus operator+(const Plus, const Plus);
        void display(){ cout<<real<<"+"<<imag<<"i"<<endl; }
};

Plus operator+(const Plus A, const Plus B){
    Plus C;
    C.real = A.real+B.real;
    C.imag = A.imag+B.imag;
    return C;
}


int main(){
    Plus A(1.2, 2.1);
    Plus B(2.3, 3.2);
    Plus C;
    C = A+B;
    C.display();
    return 0;
}
