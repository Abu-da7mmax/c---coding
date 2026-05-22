#include <iostream>



void enter_code(int passcode) {
 

  if (passcode == 0310) {
    
     std::string secret_knowledge = "https://content.codecademy.com/courses/regex/onyourexcitingjourneylearningtocodeyouwillfindthis.gif"; //here!
    
    std::cout << secret_knowledge << "\n";
    
  } else {
    
    std::cout << "Sorry, incorrect!\n";
    
  }
}

int main() {
  
/*if you put the std::cout << secret_knowledge << "\n"; here, it will not work 
because secret_knowledge is only defined in the scope of the if statement in the function "enter_code". It is not defined in the scope of main().*/
  
  enter_code(0310);
  
}