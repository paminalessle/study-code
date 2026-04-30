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
        //@brief Sets the Owners name to a string
        //
        //
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

//@brief Allows the user to deposit an amount of choice, within reason
//
//@param[1] value The value the user would like to deposit

void BankAccount::deposit(double value) {
    if(!value > 0){
        std::cout << "Error whilst depositing. Try depositing a positive number" << std::endl;
    }
    BankAccount::balance += value;
}

//@brief Allows the user to withdraw money from their account.
//
//@param[1] amount The amount the user would like to withdraw

void BankAccount::withdraw(double amount) {
    if(!(BankAccount::balance > amount)) {
        std::cout << "Error withdrawing said amount. You do not have enough money." << std::endl;
    }
    BankAccount::balance -= amount;
} 

//@brief Prints the Account Info into the console.
//

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
/*
class Note {
    private:
        std::string* text;
    public:
        Note(std::string text) {
            this->text = new std::string(text);
        }
        
        //@brief Displays the text
        

        void display() {
            std::cout << *this->text << std::endl;
        }

        ~Note() {
            delete text;
            
            std::cout << "Memory released!" << std::endl;
        }
};


int main() {
    Note Mine("hello world! Bye World");
    
    Mine.display();

    Note Yours = Mine;

    Yours.display();

    return 0;
}
*/






//Section IV: Fluent Drink Builder
/*
class DrinkBuilder {
    private: 
        std::string name;
        int sugar;
        int temperature;
        bool withMilk;
    public:
        DrinkBuilder& setName(std::string name) {
            this->name = name;
            std::cout << "Drink: " << this->name <<std::endl;
            return *this;
        };
        DrinkBuilder& setSugar(int sugar) {
            this->sugar = sugar;
            std::cout << "SUgar: " << this->sugar << std::endl;
            return *this;
        }
        DrinkBuilder& setTemperature(int temperature) {
            this ->temperature = temperature;
            std::cout << "Temperature: " <<this->temperature << std::endl;
            return *this;
        }
        DrinkBuilder& setWithMilk(bool withMilk) {
            this->withMilk = withMilk;
            if(this->withMilk = true) {
                std::cout << "With Milk: true" << std::endl;
            }
            else {
                std::cout << "With Milk: false" << std::endl;
            }
            return *this;
        }

};

int main(){
    DrinkBuilder Mine;
    Mine.setName("Tea").setSugar(6).setTemperature(78).setWithMilk(true);

    return 0;
}
*/








//Section V: Fault Analysis

/*
class Article { //write into seperate header file
    private:
        std::string name;
        double price;
        int stock;
        std::string category;
        int id;
        double finalprice;

    public:
        Article(std::string name, double price, int stock, std::string category, int id) : name(name), price(price)
        , stock(stock), id(id) {
            this->category = std::string(category);
        }

        void setPrice(double price){
            this->price = price;
        };

        void sell(int amount);

        void restock(int amount);

        double applyDiscount(double percent);

       // double getPrice() const{
       //     return this->price;
       // }

        bool isAvailable() const;

        void printInfo()const;
        
        ~Article(){}
        //missing destructor
};

//@brief Sells a certain amount of an article
//
//@param[1] amount The ammount of articles to be sold

void Article::sell(int amount) {
    if(this->stock - amount < 0) {
        std::cout << "Not enough left" << std::endl;
    }
    else if(amount<0) {
        std::cout << "Invalid amount for selling entered." <<std::endl;
    }
    else {
    this->stock -= amount;
    }
}

//@brief Restocks an article by the amount entered
//
//@param[1] amount The amount of an article to be restocked

void Article::restock(int amount) {
    if(amount<0){
        std::cout << "Invalid restock amount entered." << std::endl;
    }
    else {
    this->stock += amount;   
    }
}

//@brief Applies a dicount on the article
// 
//@param[1] percent The discount value

double Article::applyDiscount(double percent) {
    if(percent > 100){
        std::cout << "Invalid discount value entered." << std::endl;
    }
    else if(percent < 0){
        std::cout << "Invalid discount value entered." << std::endl;
    }
    else {
        this->finalprice = price - price * percent / 100;  //this-> price
        std::cout << "Discount applied." << std::endl;
    }
    return this->finalprice;
}

//@brief Checks the availabilty of the article
//

bool Article::isAvailable() const{  
    if(stock > 0){
        std::cout << "Article available" << std::endl;
        return true;
    }    
    else {
        std::cout << "Article is unavailable" << std::endl;
        return false;
    }
}

//@brief Prints the articles information to the console

void Article::printInfo() const{
    std::cout << std::endl;
    std::cout << "Article: " << name << std::endl;
    std::cout << "Category: " << category << std::endl;
    std::cout << "Price: " << finalprice << std::endl;
    std::cout << "Stock: " << stock << std::endl;
    std::cout << "ID: " << id << std::endl;
}



int main() {
    double startingPrice = 999.99;
    int startingStock = -10;
    int exampleID = 101;
    int discount = 20;
    double newprice = 89;
    int restockvalue = 93;
    int sold = 15;

    Article Laptop("Laptop", startingPrice, startingStock, "Electronics", exampleID);

    Laptop.restock(restockvalue);
    Laptop.sell(sold);
    Laptop.setPrice(newprice);
    Laptop.applyDiscount(discount);

    if(Laptop.isAvailable() == true){
        Laptop.printInfo();
    }
    
    return 0;
}
*/