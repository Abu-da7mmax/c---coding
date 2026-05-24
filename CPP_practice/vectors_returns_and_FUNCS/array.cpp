#include <iostream>
#include <array>
#include <string>
using namespace std;

// this program will set an array1 with 5 elements having 1,2,3,4,5 and an array2, then transfer the elements of array1 to array2 using loop and then print the elements of array2
int main() {
  int array1[5] = {1, 2, 3, 4, 5};
   
    int array2[5];
    for( int i = 0; i < 5; i++ ) {
        array2[i] = array1[i];

        std::cout << array2[i] << "\n";



    }}