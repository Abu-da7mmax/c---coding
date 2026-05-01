#include <iostream>
using namespace std;
int main () {

int dog_age = 0;

std::cout << "Enter the dog's age: ";
std::cin >> dog_age;

if (dog_age < 0) {
    cout << "Age cannot be negative." << std::endl;
} else if (dog_age == 0) {
    std::cout << "The dog is a newborn." << std::endl;
} else if (dog_age == 1) {
    std::cout << "The dog is 15 years old in human years." << std::endl;
} else if (dog_age == 2) {
    std::cout << "The dog is 24 years old in human years." << std::endl;
} else {
    int human_years = 24 + (dog_age - 2) * 4;
    std::cout << "The dog is " << human_years << " years old in human years." << std::endl;

}

return 0;

}