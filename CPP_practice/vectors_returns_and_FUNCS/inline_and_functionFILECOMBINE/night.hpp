inline
std::string goodnight1(std::string thing1) {       
         /*here we replaced the declaration to the definition and added the "inline" keyword to it,
         which allows us to put the definition in the header file without causing linker errors.*/
  return "Goodnight, " + thing1 + ".\n";            
  
}std::string goodnight2(std::string thing1, std::string thing2);