#include <iostream>
#include <stdexcept>


//Section I: Exception Handling

class ConfigLoader{
    public:
        std::string load(std::string filename){
            if(filename.empty()){
                throw std::invalid_argument("File Name is invalid");
            }else if(filename == "missing.cfg"){
                throw std::domain_error ("Fiile cannot be opened");
            }else if(filename == "invalid.cfg"){
                throw std::runtime_error("The system configs are invalid");
            }else if(filename.length() < 4 || filename.substr(filename.length() - 4) != ".cfg"){
                throw std::invalid_argument("Invalid File ending");
            }
        };
};


int main(){
    ConfigLoader c;

    try {
        c.load("");
    }
    catch (const std::invalid_argument& error){
        std::cout << error.what() << std::endl;
    }
    
    try {
        c.load("rawr.jpg");
    }
    catch (const std::invalid_argument& error){
        std::cout << error.what() << std::endl;
    }

    try {
        c.load("missing.cfg");
    }
    catch (const std::domain_error& error){
        std::cout << error.what() << std::endl;
    }

    try {
        c.load("invalid.cfg");
    }
    catch (const std::runtime_error& error){
        std::cout << error.what() << std::endl;
    }

    return 0;
}