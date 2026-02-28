// Learning C++ 
// Exercise 05_02
// Function Parameters, by Eduardo Corpeño 

#include <iostream>

int square(int x){
    x = x * x;
    return x;
}

//passing in pointers
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

//passing in references
void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 9, b;
    // TODO: square
    b = square(a);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    // TODO: swap
    swap(&a, &b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    // TODO: swap
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(a,b);

    std::cout << std::endl << std::endl;
    return (0);
}
