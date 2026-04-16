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
    std::cout << "You are " << age << "years old." << std::endl;
    std::cout << "That means you are a senior citizen" << std::endl;
    }

}

int main(){
    std::cout << "Please enter your age: " << std::endl;

    int age;

    std::cin >> age;
    if(!(std::cin >> age)){
        std::cout << "You did not enter a valid number. Please try again.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cout << _validation_::isAdult(age);
    std::cout <<_validation_::isSenior(age);
}