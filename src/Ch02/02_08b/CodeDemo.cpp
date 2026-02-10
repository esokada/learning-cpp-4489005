// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

// defining constants via macros
//macros have no scope
// #define AGE_LENGTH 4

int main(){

    //defining constants as with the const qualifier
    //use the size_t type (why is this more appropriate?)
    const size_t AGE_LENGTH = 4;

    //initialize an array and specify its type and length
    int age[AGE_LENGTH];

    // can also initialize an array with values
    float temperature[] = {31.5, 32.7, 38.9};

    
    age[0] = 49;
    age[1] = 38;
    age[2] = 7;
    age[3] =5;

    std::cout << "Age array length is " << AGE_LENGTH << std::endl;
    std::cout << "Age 0 is " << age[0] << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
