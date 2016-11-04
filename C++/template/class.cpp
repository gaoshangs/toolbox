#include <iostream>
using namespace std;
template <typename T1, typename T2>
class Point{
    private:
        T1 x;
        T2 y;
    public:
        Point(T1 _x, T2 _y): x(_x), y(_y){}
        void setX(T1);
        T1 getX();
        void setY(T2);
        T2 getY();
};

template <typename T1, typename T2>
void Point<T1, T2> :: setX(T1 _x){
    x = _x;
}

template <typename T1, typename T2>
T1 Point<T1, T2> :: getX(){
    return x;
}

template <typename T1, typename T2>
void Point<T1, T2> :: setY(T2 _y){
    y = _y;
}

template <typename T1, typename T2>
T2 Point<T1, T2> :: getY(){
    return y;
}

int main(){
    Point<int, int> a(10, 20);
    Point<float,char const * > b(100.23, "北京8区");
    Point<float, float> *p = new Point<float, float>(12.12, 13.13);

    cout<<"a.x="<<a.getX()<<", a.y="<<a.getY()<<endl;
    cout<<"b.x="<<b.getX()<<", b.y="<<b.getY()<<endl;
    cout<<"p->x="<<p->getX()<<", p->y="<<p->getY()<<endl;
    delete p;

    return 0;
}
