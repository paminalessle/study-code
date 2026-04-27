#include <iostream>
#include <string.h>

class User {
    protected: 
        std::string name;
        int id;
    public:
        User(std::string name, int id) : name(name), id(id){
            std::cout << "Constructor od User" << std::endl;
        }
        void printInfo() {
            std::cout << name << std::endl;
            std::cout << id << std::endl;
        }
};

class Student : public User {
    private: 
        int matNr;
    public:
        Student(std::string name, int id, int matNr) : User(name, id), matNr(matNr){
            std::cout << "COnstructor of Student" <<std::endl;
        }
        int set_points(int additional_points){
            this->points += additional_points;
        }
        void printRole() {

        }
    
};

class Instructor : public User {

};