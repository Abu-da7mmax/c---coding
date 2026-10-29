#include <iostream>


template <typename f>
f get_smallest(f num1, f num2) {
  
  return num2 < num1? num2 : num1;
  
}


int main() {
  
  std::cout << get_smallest(100, 60) << "\n";
  std::cout << get_smallest(2543.2, 3254.3) << "\n";
  
}