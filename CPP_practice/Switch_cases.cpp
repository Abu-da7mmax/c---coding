#include <iostream>

int main() {
  std::cout << "Welcome in our program project for going to space!\n\n";
  std::cout <<"We have plenty of planets to explore!\n";
  std::cout <<"1. Mercury\n";
  std::cout <<"2. Venus\n";
  std::cout <<"3. Mars\n";
  std::cout <<"4. Jupiter\n";
  std::cout <<"5. Saturn\n";
  std::cout <<"6. Uranus\n";
  std::cout <<"7. Neptune\n";
  double weight;
int planet;
std::cout << "But before we go further more Please fill in the blanks below\n";
 std::cout << "Enter your earth weight\n";
  std::cin >> weight;

std::cout << "Enter the planet number you want\n";
  std::cin >> planet;
switch (planet){

case 1:
std::cout << "Your weight on Mercury is " << weight * 0.38;
break;

case 2:
std::cout << "Your weight on Venus is " << weight * 0.91;
break;

case 3:
std::cout << "Your weight on Mars is " << weight * 0.38;
break;

case 4:
std::cout << "Your weight on Jupiter is " << weight * 2.34;
break;

case 5:
std::cout << "Your weight on Saturn is " << weight * 1.06;
break;

case 6:
std::cout << "Your weight on Uranus is " << weight * 0.92;
break;

case 7:
std::cout << "Your weight on Neptune is " << weight * 1.19;
break;

default:
std:: cout << "fealthy fatass thinkin he is funny GETOUTTA HERE!!!!!!";
break;



}
  

  
  
  return 0;
  
  
  
  
  
  
  
}