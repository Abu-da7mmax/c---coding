#include <iostream>
#include <string>
using namespace std;

class student {
public:
string name;
int entry;

void student_info(){ // didn't put the arguments because the attributes are already in the class and we can access them directly from "main" function
    
    cout << name << " entered in: " << entry << " \nand has an id of " << id <<"\n" << endl;
}
void setID(int studentid) {
 id = studentid;
}

int getID() {
    return id;
}



private:
int id;

};

int main() {

student student1;
student1.name = "Omar";
student1.entry = 2022;
student1.setID(42200424);
student1.student_info();

student student2;
student2.name = "Da7m";
student2.entry = 2023;
student2.setID(42200425);
student2.student_info();

cout << student2.name <<" has an id of " << student2.getID() << endl;


    return 0;
}