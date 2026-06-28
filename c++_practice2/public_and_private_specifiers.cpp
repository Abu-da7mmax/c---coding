#include <iostream>
#include <string>
using namespace std;


class employee {
public:
string name;

void setsalary(double s) {
    if(s < 0) salary = 0;
    else
    salary = s;
}

double getsalary() {
    return salary;
}
void print_bonus(){
    cout << " the bonus is " << salary_bonus() << endl;
}
private:
double salary;
double salary_bonus(){
    return salary*0.10;
}
};



int main () {

    employee e1;
    e1.name = "d7mi";
    e1.setsalary(5000);
    cout << e1.name << " has " << e1.getsalary() << endl;
    e1.print_bonus();
}