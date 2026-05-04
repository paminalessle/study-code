#include <iostream>
#include <cmath>

//Section I: Static Polymorphism
/*
class Vec2D {
    private: 
        double x, y;
    public:
        Vec2D(double x, double y): x(x), y(y) {}
        
        double getX()const{
            return x;
        }
        double getY()const{
            return y;
        }

        double printXY()const{
            std::cout << this->x << this->y << std::endl;
        }

        double getLength()const{
            return sqrt((x*x)+(y+y));
        }

};

Vec2D operator*(int num,  Vec2D& v){
            return Vec2D(num*v.getX(), num*v.getY());
        }
Vec2D operator+(Vec2D& v, Vec2D& v2){
    return Vec2D(v.getX() + v2.getX(), v.getY() + v2.getY());
}

Vec2D operator-(Vec2D& v, Vec2D& v2){
    return Vec2D(v.getX() - v2.getX(), v.getY() - v2.getY());
}



int main() {
    Vec2D v(2,3);
    Vec2D v2(4,7);

    Vec2D result = 3*v;
    result.printXY();
    
}
    */

//Section III: Bug Hunt

