// Learning C++ 
// Exercise 04_04
// For Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {12, 25, 31, 47, 58};
    float average;

    average = 0.0f;
    // for (int i =0; i < numbers.size(); i++){
    for (auto x: numbers){
        average += x;
    }

    average /= numbers.size();

    std:: cout << average << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
