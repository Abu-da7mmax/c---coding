#include <iostream>
#include <array>
using namespace std;

// this program will set an array1 with 4 elements having 1,2,3,4 then save the last element idndex memory adress in a pointer and then print the value of the elements using loop

int main() {
  int array1[4] = {1, 2, 3, 4};

    int* ptr = &array1[3]; // pointer to the last element of the array
    * ptr = 8;
    for( int i = 0; i < 4; i++ ) {
        cout << array1[i] << " "; // print the value at the memory address pointed by ptr
    }
}