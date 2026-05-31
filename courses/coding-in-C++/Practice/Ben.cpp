#include <string>
#include <iostream>
#include <limits>
#include <vector>

/*
int main() {
    std::string line;
    std::getline(std::cin >> std::ws, line);

    int age = 0;
    while(age == 0) {
        std::cout << "Enter a valid int: \n" ;
        if(!(std::cin >> age)) {
            std::cout << "Invalid input. \n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
    }

    std::cout << line << std::endl;
    return 0;
}
*/

class Animals{
    private:
    int age;


    public:

    Animals(int age): age(age) {};

    void setAge(int age) {
        this->age = age;
    }

    virtual void makeSound() = 0;

    int getAge() const{
        return age;
    }

    virtual ~Animals() = default;
    

};

class Dog: public Animals {
    private:
    std::string name;
    public:
        Dog(): Animals(0) {};
    
        Dog(int age): Animals(age) {};

        void makeSound() override{
            std::cout << "woof\n";
        }

};


std::ostream& operator<< (std::ostream &stream, const Dog &dog) {
    stream << dog.getAge();
    return stream;
}

class Kennel{
    public:
        Animals* p_held_animal;
};

int main() {
    Kennel k1 = Kennel();

    Dog d1 = Dog(2);

    d1.setAge(6);

    d1.makeSound();

    k1.p_held_animal = &d1;

    k1.p_held_animal->makeSound();

    std::cout << d1;

    std::vector<Kennel> row;

    for (Kennel &k : row) {
        k.p_held_animal->makeSound();
    }

    for (auto it = row.begin(); it == row.end(); it++) {
        it->p_held_animal;
    }


    return 0;
}