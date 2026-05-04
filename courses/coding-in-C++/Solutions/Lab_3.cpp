#include <iostream>
#include <string.h>

//Section I: Online Learning Platform

class User {
    protected:
        std::string name;
        int user_id;
    private:
        
}


//Section II: Inheritance
/*
class User {
    protected: 
        std::string name;
        int id;
    public:
        
        //@brief Constructs an object of class User

        //Initializes the name and id of the User

        //@param[1] name  The name of the user
        //@param[2] id  The id of the user
        
        User(std::string name, int id) : name(name), id(id){
            std::cout << "Constructor of User" << std::endl;
        }
        
        //@brief Prints the information of the User
        
        void printInfo();
};

void User::printInfo(){
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "ID: " << this->id << std::endl;
}

class Student : public User {
    private: 
        int matNr;
    public:
        
        //@brief Constructs a Student object

        //@param[1] name  The name of the student
        //@param[2] id  The id of the student
        //@param[3] matNr The matriculation number of the student
        
        Student(std::string name, int id, int matNr) : User(name, id), matNr(matNr){
            std::cout << "Constructor of Student" <<std::endl;
        }
        
        void printRole();
    
};
void Student::printRole() {
            std::cout << "Role: Student" << std::endl;
            std::cout << "Name: " << this->name << std::endl;
            std::cout << "ID: " << this->id << std::endl;
            std::cout << "Matriculation number: " << this->matNr << std::endl;
}

class Instructor : public User {
    private: 
        int matNr;
    public:
        
        //@brief Constructs an Instructor object

        //@param[1] name  The name of the instructor
        //@param[2] id  The id of the instructor
        //@param[3] matNr The matriculation number of the instructor
        Instructor(std::string name, int id, int matNr) : User(name,id), matNr(matNr) {
            std::cout << "Constructor of Instructor" << std:: endl;
        }
        
        void printRole();
};

void Instructor::printRole(){
            std::cout << "Role: Instructor" << std::endl;
            std::cout << "Name: " << this->name << std::endl;
            std::cout << "ID: " << this->id << std::endl;
            std::cout << "Matriculation number: " << this->matNr << std::endl;
}

int main(){
    Student John("John Boyle", 24, 18374);
    Instructor Miles("Miles Smith", 18, 39317);

    John.printInfo();
    John.printRole();

    Miles.printInfo();
    Miles.printRole();

    return 0;
}
*/