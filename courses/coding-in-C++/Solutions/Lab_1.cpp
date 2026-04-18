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

namespace validation {
    const std::uint16_t ADULT_LIMIT = 18;
    const std::uint16_t SENIOR_LIMIT = 65;
    bool isAdult(std::uint16_t age) {
        return age >= ADULT_LIMIT;
    }
    bool isSenior(std::uint16_t age) {
        return age >= SENIOR_LIMIT;
    }
}

int main(){
    std::cout << "Please enter your age" << std::endl;

    int age = 0;

    if(!(std::cin >> age)) {
        std::cout << "You did not enter a valid number. Please try again." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cout << "You are " << age << " years old" << std::endl;

    std::uint16_t valid_age = static_cast<std::uint16_t>(age);

    if(validation::isSenior(valid_age)){
        std::cout << "That means you are a senior citizen"<< std::endl;
    }
    else if(validation::isAdult(valid_age)) {
        std::cout << "That means you are an adult" << std::endl;
    }
    else{
        std::cout << "That means you are either still a child or a teenager" << std::endl;
    }

    return 0;
}