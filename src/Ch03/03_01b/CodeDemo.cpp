// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose{dairy,pet};

struct cow {
    std::string name;
    int age;
    cow_purpose purpose;

};

int main(){

    cow my_cow;
    my_cow.name = "Betsy";
    my_cow.age = 10;

    std::cout << "Name: " << my_cow.name << std::endl;
    std::cout << "Age: " << my_cow.age << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
