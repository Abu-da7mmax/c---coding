#include <iostream>
using namespace std;
// Interactive calculator: reads two numbers and an operator from the user
void calculator() {
    int num1, num2;
    char op;

    cout << "Enter expression like 5 + 10: ";
    cin >> num1 >> op >> num2;

    if (op == '+') {
        cout << num1 + num2 << "\n";
    } else if (op == '-') {
        cout << num1 - num2 << "\n";
    } else if (op == '*') {
        cout << num1 * num2 << "\n";
    } else if (op == '/') {
        if (num2 == 0) {
            cout << "Cannot divide by zero" << "\n";
        } else {
            cout << num1 / num2 << "\n";
        }
    } else {
        cout << "Invalid operation" << "\n";
    }
}
int main () {
    calculator();
    return 0;
}