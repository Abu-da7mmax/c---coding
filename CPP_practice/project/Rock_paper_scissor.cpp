// Hello ladies and gentelmen in this code program you'll be shocked by how hard it is to live a simple life now stay tuned.
#include <iostream>
#include <stdlib.h>
int main() {
srand (time(NULL));

int computer = rand() % 3 + 1;

int user = 0;

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

std::cout << "1) rock\n";
std::cout << "2) paper\n";
std::cout << "3) scissor\n";

std::cout << "shoot! ";

std::cin >> user;

if(user == computer) {
  std::cout << "Its a tie!";
}

else if((user == 1 && computer == 2) || (user == 2 && computer == 3) || (user == 3 && computer == 1)) {
  std::cout <<"you lost unfortionaly :(\n";
}
else {
  std::cout << "YOU WON! YAAAY\n";
}
return 0;
}