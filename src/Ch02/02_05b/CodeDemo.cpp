// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    // auto keyword for type inference
    auto a = 8;
    auto b = 12345678901;
    auto c = 3.14f;
    //double
    auto d = 3.14;
    auto e = true;
    //char single quotes
    auto f = 'a';
    auto g = "yay c++";
    
    std::cout << "The type is " << typeid(e).name() << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
