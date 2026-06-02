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



//Section IV: Bug Hunt
/*
return value for operator override
exception handling for emergency brake system
during an emergency brake one should brake down to 0 aka the exacct speed one is going at not just 30kmh
activate()/deactivate() can be one function
missing exception for braking braking for under 0 kmh 
vehicle.get_lane_offset() doesnt exist?


not found:
std::string &get_model -> const
exception handling for acceleration is not necessary
DistanceSensor: measured_distance_m -> is public, should be private
Emergency Brake System: getdistance > critical_distance -> getdistance < critical_distance
void evaluate EmergencyBrakeSystem -> is const, shouldnt be
max acceleration value -> should be implemented
Adaptive Cruise Control -> accelerates when vehicle is to close 
exception handling/ return value for each assistance when sensors dont work 
Distane Sensor is exactly at warning sensor: compares 2 doubles -> doesnt work like that
Lane keeping Assistance is shit
Exception handling within the Sensors as an "Observer"
magic numbers
*/