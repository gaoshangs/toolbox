#include <iostream>
using namespace std;
class Line{
    protected:
        float length;
    public:
        Line(float length) : length(length){}
        virtual float area() = 0;
        virtual float volume() = 0;
};

class Rec: public Line{
    protected:
        float width;
    public:
        Rec(float width, float length): width(width), Line(length){}
        float area(){ return width * length; }
};

class Cuboid: public Rec{
    protected:
        float height;
    public:
        Cuboid(float length, float width, float height): Rec(width, length), height(height){}
        float area();
        float volume();
};

float Cuboid::area(){
    return 2 * (width*length + width*height + length*height);
}

float Cuboid::volume(){
    return width*length*height;
}

class Cube: public Line{
   public:
        Cube(float length):Line(length){}
        float area(){ return 6*length*length; }
        float volume(){ return length*length*length; }
};

int main(){
    Cuboid c1(1, 2, 3);
    cout <<"c1(1,2,3)::area = "<<c1.area()<<endl;
    cout <<"c1(1,2,3)::volume = "<<c1.volume()<<endl;

    Cube c2(1);
    cout <<"c2(1)::area = "<<c2.area()<<endl;
    cout <<"c2(1)::area = "<<c2.area()<<endl;

    return 0;
}
