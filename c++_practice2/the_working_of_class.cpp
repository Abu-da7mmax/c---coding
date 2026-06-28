// this example from a youtube account shows how to create a class in c++ and how to use it in main function

#include <iostream>
#include <string>
using namespace std;

class bankaccount {
    public:
    string name; //attribute of the class
    int balance; //attribute of the class

void withdraw(int amount){// this member function is called method
    balance = balance - amount;
}

void print(){ // this member function is called method
    cout << name << " has " << balance << " dollars " << endl; //instead of doing it each time this function does it fase just type "print" with the instances u want.
}
};




int main(){

    bankaccount account1;
    account1.name = "da7m";
    account1.balance = 1000;
    account1.print();

    bankaccount account2;
    account2.name = "omar";
    account2.balance = 500;
    account2.withdraw(700);
    account2.print();
    

}