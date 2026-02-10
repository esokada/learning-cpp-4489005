// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

int main(){
    int nums[5] = {1,23,32,24,337};
    //defining this as a float is the easiest way to end up with a float at the end
    float result; 

    // Write your code here
    int my_sum = nums[0] + nums[1] + nums[2] + nums[3] + nums[4];
    float my_denom = 5;

    //could also use /= operator
    result = my_sum / my_denom;
    
    std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
