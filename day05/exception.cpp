/*in order to create user defined exception in c++ we need two steps:
first: inherit the exception class and second step is : override the what() methode of exception class
exception class is predifined in c++ and it consist one methode called what()
how to override the what() methode:
 Virtual const char* what() const throw()
 {
     return "message";
 }
virtual==> this methode can be overriden in the derived class
const char*==>return modifiable pointer to constant array of character
what()==>print the erro message
const ==> the function doesn't modify the members of object on which it invoked.
throw()==>exception specification, what() is not going to throw any kind of exception*/
