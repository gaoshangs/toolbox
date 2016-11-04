#include <iostream>
using namespace std;

class Plus{
    private:
        double real;
        double imag;
    public:
        Plus():real(0.00), imag(0.00){}
        Plus(double real, double imag):real(real), imag(imag){} 
        Plus operator+(const Plus) const;
        void display();
};

Plus Plus::operator+(const Plus A) const{
    Plus B;
    B.real = real + A.real;
    B.imag = imag + A.imag;
    return B;
}

void Plus::display(){
    cout<<real<<"+"<<imag<<"i"<<endl;
}

int main(){
    Plus A(1.2, 2.2);
    Plus B(2.2, 1.2);
    Plus C;
    C = A + B;
    C.display();
    return 0;
}
