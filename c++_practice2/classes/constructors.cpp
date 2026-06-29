#include <iostream>
using namespace std;

class Car{
    public:
        string make;
        string model;
        int year;
        string color;

    Car(string make, string model, int year, string color){ // we put the arguments in the constructor because we want to assign values to the attributes when we create an object of the class
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
    void printCARinfo(){
        cout << make << ' ' << model << ' ' << year << ' ' << color << '\n';
    }
};

int main() {

    //constructor =  special method that is automatically called when an object is instantiated
	//                      useful for assigning values to attributes as arguments

    Car car1("Chevy", "Corvette", 2022, "blue");
    Car car2("Ford", "Mustang", 2023, "red");

    car1.printCARinfo();
    car2.printCARinfo();

    return 0;
}