#include <iostream>
#include <string.h>
/*
int main(){
    std::cout << "Hello World!" <<std::endl;
    return 0;
}
*/

/*
constexpr int MAX_AGE_ADULT = 60;
constexpr int MAX_AGE_KID = 18;
constexpr int MAX_AGE = 130;


namespace validation{
    bool isAdult(int age) {
        if (age > MAX_AGE_KID){
            return true;
        }
        else {
            return false;
        }
    }
    bool isSenior(int age) {
        if (age > MAX_AGE_ADULT) {
            return true;
        }
        else {
            return false;
        }
    }
}

int main() {
    int age;
    std::cout << "Please enter your age: " << std::endl;
    std::cin >> age;
    
    if(age > MAX_AGE || age == 0) {
        std::cout << "Invalid age input" << std::endl;
        return 1;
    }

    std::cout << "You are " << age << " years old." << std::endl;
    std::cout << "That means that you are " ;
    if(validation::isSenior(age)) {
        std::cout << "a senior." << std::endl;
    } else if (validation::isAdult(age)) {
        std::cout << "an adult." << std::endl;
    } else {
        std::cout << "still a child or teenager." << std::endl;
    }
    
    return 0;
    
}
*/


constexpr int MAX_GRADE = 100;

void readStudentData(std::string &name, int &homework, int &midterm, int &finalExam) {
    std::cout << "Enter the students name: " << std::endl;
    std::getline(std::cin >> std:: ws, name);

    int i = 0;
   
    for(int i = 0; i == 0;) {
        std::cout << "Homework grade: " << std::endl;
        if(!(std::cin >> std::ws >> homework) || 100 < homework || 0 > homework){
            std::cout << "Invalid grade input." << std::endl;
            std::cin.clear();
            std::cin.ignore();
        } else {
            i = 1;
        }
    }

    std::cout << "Midterm grade: " << std::endl;
    std::cin >> midterm;
    std::cin >> std::ws;


    std::cout << "Final exam grade: " << std::endl;
    std::cin >> finalExam;
    std::cin >> std::ws;
}

int main(){
    std::string name;
    int homework;
    int midterm;
    int finalExam;

    readStudentData(name, homework, midterm, finalExam);

    return 0;
        
}
