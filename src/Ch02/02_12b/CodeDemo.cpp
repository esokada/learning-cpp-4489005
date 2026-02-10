// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

//C-style enum - not recommended
//can cause namespace conflicts
//don't have a scope - are like global variables
//enum cow_purpose {dairy, meat, hide, pet};

enum class cow_purpose {dairy, meat, hide, pet};

int main(){
    cow_purpose a;

    a = cow_purpose::meat;


    std::cout << "a = " << (int) a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
