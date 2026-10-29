#include <iostream>
#include <string>
using namespace std;

struct car{
    string name;
    int model;
    bool valid;
};

int main() {
    car car3;
    car3.name ="elentra";
    car3.model =2020;
    car3.valid = true;
    cout << car3.name << " \n" << car3.model << " \n" << car3.valid << endl;
}