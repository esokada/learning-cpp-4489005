// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string name_string;

    // use std::flush to make sure the output is completely sent to the terminal
    std::cout << "What is your name?" << std::flush;

    // this stores the user input in the variable
    // cin only works for single words, not spaces
    std::cin >> name_string;

    // can "glue" strings together with a sequence of insertion operators
    std::cout << "Thanks, "  << name_string << std::endl;

    return (0);
}
