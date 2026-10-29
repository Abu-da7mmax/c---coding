#include <iostream>
#include <string>
 using namespace std;

class animal{
public:
bool alive = true;

void eat(){
    cout << "this animal is eating" << endl;
}};

class dog : public animal{
public:

void bark(){
    
    cout << "this dog is barking" << endl;
}
};

class cat : public animal{
public:

void meow(){

    cout << "this cat is meowing" << endl;
}
};


int main() {

dog dog1;
dog1.eat();
dog1.bark();
cout << dog1.alive << '\n'<< endl;


cat cat1;
cat1.eat();
cat1.meow();
cout << cat1.alive << '\n'<< endl;

    return 0;
}
    