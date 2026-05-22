#include <iostream>
#include <vector>

//this is func
void hi(){
    std::cout << "hi, what is wrong with you?\n";
    return;
}

std::vector<int> first_three_multiples(int num){

// Define first_three_multiples() here: we put the values in "result" and then return it.
//this is also func
   std::vector<int> result{num * 1, num * 2, num * 3};
   return result;
}

int main() {
    char user_input;
  std::cout << "The first three multiples of 8 are:\n";
  std::cout << "do you wanna have some fun?" << "\n";
  std::cin >> user_input;

  if (user_input == 'y') {
    std::cout << "Great! Let's have some fun.\n";
  for (int element : first_three_multiples(8)) { // notice the call to the function "first_three_multiples" here!
    std::cout << element << "\n";
  }}

  if (user_input == 'n') {
    std::cout << "Oh, okay. Maybe next time.\n";
hi();//notice the call to the function "hi" here!
  }}
