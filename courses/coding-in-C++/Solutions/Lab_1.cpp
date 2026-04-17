#include <iostream>
#include <string>
#include <limits>
#include <cstdint>


//Section I
/*
int main(){
    std::cout << "Hello World!" << std::endl;
}
*/

//Section III

namespace _validation_ {
    bool isAdult(std::int_least8_t age) { 
        if (65 > age >= 18){
            return true;
        }
    }

    bool isSenior(std::int_least8_t age) {
        if(age >= 65){
            return true;
        }
    }

}

int main(){
    std::cout << "Please enter your age: " << std::endl;

    //int age = 0;

    /*std::cin >> age;
    if(!(std::cin >> age)){
        std::cout << "You did not enter a valid number. Please try again.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }*/

    std::cout <<"You are" << "8" << "years old" << std::endl;

}