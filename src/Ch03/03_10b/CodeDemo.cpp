// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std::vector<cow> cattle;

    cattle.push_back(cow("Betty", 6, cow_purpose::meat));
    cattle.push_back(cow("Libby", 4, cow_purpose::hide));
    cattle.push_back(cow("Trudy", 5, cow_purpose::pet));
    cattle.push_back(cow("Betsy", 2, cow_purpose::dairy));
    
    //pointers are a type of iterator??
    //.begin() is an iterator to the first element
    std::cout << "The first cow is: " << cattle.begin()->get_name() << std::endl;
    // use dot accessor because this is an object (the others are iterators)
    std::cout << "At index 1 is: " << cattle[1].get_name() << std::endl;
    //prev arguments: iterator and number of positions to move
    std::cout << "Next to last is: " << prev(cattle.end(),2)->get_name() <<std::endl;
    std::cout << "The last cow is :" << (cattle.end()-1)->get_name() << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
