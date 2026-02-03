// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

//include is a "directive" to the preprocessor
#include <iostream>
#include <string>
//preceding c indicates from C
#include <cstdint>

//macros
#define CAPACITY 5000
#define DEBUG


int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG
    std::cout << "This is a debug message" << std::endl;
#endif
    large += small;
    std::cout << "Result is " << large << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
