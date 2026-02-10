// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>

int main(){
    std::vector<int> primes;
    //vectors are guaranteed to store things consecutively in memory
    primes.push_back(2);

    std::cout << "The size of the vector is: " << primes.size() << std::endl;
    std::cout << "The value of the first element is: " << primes[0] << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
