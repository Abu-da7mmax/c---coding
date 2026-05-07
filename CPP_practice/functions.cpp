#include <iostream>
using namespace std;
// function prototype using void defined and takes two int types as parameters to create an operation calculator
void calculator( int num1, int num2){

cin >> num1 >> num2;

cout << num1 + num2 << "\n";
cout << num1 - num2 << "\n";
cout << num1 * num2 << "\n";
cout << num1 / num2 << "\n";
}

int main () {
     calculator(5, 10);
    return 0;
}