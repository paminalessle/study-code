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

//Section II: Static Polymorphism

//Task 1, 2

class Shape{
    public: 
        virtual double area() const{
            return 0.0;
        }
        virtual ~Shape() {};
};

class Circle: Shape{
    private:
        double radius;
        const double pi = 3.14;
    public:
        Circle(double radius):radius(radius){};
        double area() const override{
            return pi*this-> radius *this->radius;
        }

};

class Rectangle: Shape{
    private:
        double length;
        double width;
    public:
        Rectangle(double length, double width): length(length), width(width){};
        double area()const override{
            return this->length*this->width;
        }

};

int main(){
    Circle circle = Circle(5);

    
}