#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car){ // the & symbol is used to pass the car object from the main function to the printCar function by reference. if we didn't use the & symbol, the printCar function would create a copy of the car object and any changes made to the copy would not affect the original object.
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
void paintCar(Car &car, std::string color){       // the & symbol is used to pass the car object from the main function to the paintCar function by reference. 
    car.color = color;
}

int main () {

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";

    paintCar(car1, "silver");
    paintCar(car2, "gold");

    printCar(car1);
    printCar(car2);

    return 0;
}
