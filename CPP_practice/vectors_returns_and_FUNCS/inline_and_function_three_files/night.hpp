#include <string>
using namespace std;
// Function definitions for goodnight1() and goodnight2()
inline
string goodnight1(string thing1) {       
         /*here we replaced the declaration to the definition and added the "inline" keyword to it,
         which allows us to put the definition in the header file without causing linker errors.*/
  return "Goodnight, " + thing1 + ".\n";            
  
}string goodnight2(string thing1, string thing2);