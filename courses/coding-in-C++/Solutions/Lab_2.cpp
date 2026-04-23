#include <iostream>
#include <string>
#include <cstdint>



//Section I: Bank Account
/*
class BankAccount {
    private:
        std::string owner;
        double balance;
    public:
        void setOwner(std::string name){
            BankAccount::owner = name;
        }
        std::string getOwner(){
            return BankAccount::owner;
        }
        void deposit(double value);
        void withdraw(double amount);
        double getBalance() {
            return BankAccount::balance;
        };
        void getAccountInfo();
};

void BankAccount::deposit(double value) {
    if(!value > 0){
        std::cout << "Error whilst depositing. Try depositing a positive number" << std::endl;
    }
    BankAccount::balance += value;
}

void BankAccount::withdraw(double amount) {
    if(!(BankAccount::balance > amount)) {
        std::cout << "Error withdrawing said amount. You do not have enough money." << std::endl;
    }
    BankAccount::balance -= amount;
} 

void BankAccount::getAccountInfo() {
    std::cout << "Owner: " << owner << std::endl;
    std::cout << "Balance: " << balance << std::endl;
}

int main() {
    BankAccount MyAccount;

    MyAccount.setOwner("John");
    MyAccount.deposit(300);
    MyAccount.withdraw(2);
    MyAccount.getOwner();
    MyAccount.getBalance();
    MyAccount.getAccountInfo();


    return 0;
}
*/

//Section II: Note Class 

class Note {
    private:
        std::string* text;
    public:
        Note(std::string text) {
            this->text = new std::string(text);
        }

        ~Note() {
            delete text;
            
            std::cout << "Memory released!" << std::endl;
        }
        std::string display() {
            
        }
};


int main() {
    Note Mine("hello world! Bye World");
    
    Mine.display;

    return 0;
}




