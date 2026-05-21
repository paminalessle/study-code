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

    void swap() {
        T& ptA = value_a;
        T& ptB = value_b;

        T temp = ptA;
        ptA = ptB;
        ptB = temp;
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
// Task 3: Weakest Signal Detector
// Task 4: Telemetry Tag Composer

template <typename T, int U>
class Drone {
    private:

        T smallest;

    public:
        Drone& print(T (&sensor_frames)[U]){
            for(int i = 0; i < U; i++) {
                std::cout << sensor_frames[i] << ", ";
            }
            std::cout << "End of Sensor Frames" << std::endl;
            return *this;
        };

        Drone& set(int space, T value){
            this-> sensor_frames[space] = value;
            return *this;
        }

        T detect(T (&sensor_frames)[U]){
            this-> smallest = sensor_frames[0];
            for(int i = 1; i < smallest; i++){
                if(sensor_frames[i] < smallest){
                    smallest = sensor_frames[i];
                }   
            }
            return smallest;
        }

        void get_smallest() const{
            std::cout << "The smallest value is: " << this-> smallest << std::endl;
        }

        template <typename L, typename V, typename V2>
        void tag_composer(L label1, V value1, L label2, V2 value2){
            std::cout << label1 << ": " << value1 << " | " << label2 << ": " << value2 << std::endl;
        }
};


int main(){
    Drone<> first;
    first.set(1, 98).set(7,6).set(8,5).set(4, 23);
    int sensor_frames[4];
    first.print(sensor_frames);
    first.detect();
    first.get_smallest();
    first.tag_composer("Channel", 7, "Priority", 2);
    return 0;
}
