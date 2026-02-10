// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){

    float my_flt;
    int32_t my_sgn;
    uint32_t my_unsgn;

    //this is a double but it's still okay to assign it to a float
    my_flt = -7.66;
    // implicit conversion / type-casting
    my_sgn = my_flt;
    // this wraps around because it is 2^32 -7
    my_unsgn = my_sgn;

    std::cout << my_flt << std::endl;
    std::cout << my_sgn << std::endl;
    std::cout << my_unsgn << std::endl;
    //casting to signed
    std::cout << (int32_t) my_unsgn << std::endl;    
    
    std::cout << std::endl << std::endl;
    return (0);
}
