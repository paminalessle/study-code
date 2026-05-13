#include <iostream>


template <typename T, typename U>

class Pair {
    private:
        T a;
        U b;
    public:
        Pair(T a, T b): a(a), b(b){}

        void setA(T a){
            this-> a = a;
        }
        void setB(U b) {
            this-> b = b;
        }

        T getA () const{
            return this-> a;
        }
        U getB () const{
            return this-> b;
        }
};

int main(){
    Pair p = Pair<int, double> (3, 7.5);
    
    p.setA(9);
    p.setB(23.8);


    p.getA();
    p.getB();

    std::cout << p.getA() << " " << p.getB() << std::endl;

    return 0;
}