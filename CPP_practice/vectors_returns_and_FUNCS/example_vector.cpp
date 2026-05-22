#include <iostream>
#include <vector>
// This program calculates the sum of even numbers and the product of odd numbers using a vector
int main() {
  
  int total_even = 0;
  int product_odd = 1;
  
  std::vector<int> vector = {2, 4, 3, 6, 1, 9};
  // now we will output the vector values then will go to a for loop 
  for (int i = 0; i < vector.size(); i++) {
    std::cout << vector[i] << "\n";
    if (vector[i] % 2 == 0) {
    
      total_even = total_even + vector[i];
      
    } else {
      
      product_odd = product_odd * vector[i];
      
    }
    
  }
  
  std::cout << "Sum of even: " << total_even << "\n";
  std::cout << "Product of odd: " << product_odd;
  
}
