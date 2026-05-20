#include <iostream>

//Section I:
//Task 1: Emergency Payload switch

/*
template <typename T>
class Payload{
    private:
        T value_a;
        T value_b;
        T temp;
    public:
    Payload(T a, T b): value_a(a), value_b(b){};

    T swap() {
        this->temp = this->value_a;
        this->value_a = this->value_b; //refrences needed. dont know how
        this->value_b = this->temp;
        return value_b, value_a;
    }

    void print(){
        std::cout << this-> value_a <<"    " << this->value_b << std::endl;
    }
};

int main(){
    Payload p = Payload( 67, 89);
    p.print();
    p.swap();
    p.print();

    return 0;
}
*/

// Task 2: Sensor frame printer

template <typename T, int U>
class Drone {
    private:
        T sensor_frames[U];
    public:
        void print(){
            std::cout << &sensor_frames[U] << std::endl;
        };
};

int main(){
    Drone<double,15> first;

    first.print();

    return 0;
}