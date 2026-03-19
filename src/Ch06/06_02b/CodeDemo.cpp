// Learning C++ 
// Exercise 06_02
// Opening a text file for writing, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream>

int main(){
    std::ofstream outFile;
    float a = 4.333f, b = 5.302f;

    //write mode by default
    //append mode also available
    outFile.open("calculations.txt");
    if (outFile.fail())
        std::cout << std::endl << "Couldn't open the file!" << std::endl;
    else{
        //use leftbound insertion operator into outFile stream
        //no need to convert types to strings
        outFile << "a = " << a << std::endl;
        outFile << "b = " << b << std::endl;
        outFile << "a + b = " << a + b << std::endl;
        outFile << "a * b = " << a * b << std::endl;
        outFile.close();
        std::cout << "File written successfully!" << std::endl;
    }
    
    std::cout << std::endl << std::endl;
    return (0);
}
