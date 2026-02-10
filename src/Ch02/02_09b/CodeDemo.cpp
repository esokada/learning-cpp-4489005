// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

int main(){
    const size_t LENGTH1 = 25;
    char array_str1[LENGTH1] = "Greeting 1 ";
    char array_str2[] = "Greeting 2 ";

    std::string std_str1 = "Greeting 3 ";
    std::string std_str2 = "Greeting 4";

    //this concatenation function modifies the first string
    strncat(array_str1, array_str2, LENGTH1);
    std::cout << array_str1 << std::endl;
    //concatenation with operator
    std::cout << std_str1 + std_str2 << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
