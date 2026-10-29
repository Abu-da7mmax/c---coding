#include <iostream>
#include <string>


std::string make_coffee(bool milk = false, bool sugar = false); // we've declared the function and set default values for the parameters, 

std::string make_coffee(bool milk, bool sugar) { // Definition
  std::string coffee = "Here's your coffee";
  if (milk and sugar) {
    coffee += " with milk and sugar";
  } else if (milk) {
    coffee += " with milk";
  } else if (sugar) {
    coffee += " with sugar";
  }
  return coffee + ".\n";}

int main() {
  
  // coffee black
  std::cout << make_coffee();
  
  // coffee with milk
  std::cout << make_coffee(true);
  
  // coffee with milk and sugar
  std::cout << make_coffee(true, true);
  
  // coffee with sugar
  std::cout << make_coffee(false, true);
  
}