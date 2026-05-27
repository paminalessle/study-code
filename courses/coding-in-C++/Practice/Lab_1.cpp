#include <iostream>
/*
int main(){
    std::cout << "Hello World!" <<std::endl;
    return 0;
}
*/


constexpr int MAX_AGE_ADULT = 60;
constexpr int MAX_AGE_KID = 18;


namespace validation{
    bool isAdult(int age) {
        if (age > MAX_AGE_KID){
            return true;
        }
    }
    bool isSenior(int age){
        if (age > MAX_AGE_ADULT) {
            return true;
        }
    }
}

int main() {
    int age;
    std::cout << "Please enter your age: " << std::endl;
    std::cin >> age;


    std::cout << "You are " << age << " years old." << std::endl;
    std::cout << "That means that you are " ;
    
}