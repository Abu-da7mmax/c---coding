#include <iostream>
using namespace std;

class Car{
    public:
        string make;
        string model;
        int year;
        string color;
    Car(){
     
    }
    Car(string make, string model, int year, string color){ /* the constructor is a special method that is automatically called when an object
   is instantiated. It is useful for assigning values to attributes as arguments */
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
    Car car3;
    car3.make = "ford monster";
    car1.printCARinfo();
    car2.printCARinfo();
    car3.printCARinfo();
    return 0;
}