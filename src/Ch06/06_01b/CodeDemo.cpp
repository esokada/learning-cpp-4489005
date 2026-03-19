// Learning C++ 
// Exercise 06_01
// Opening a text file for reading, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream>

int main(){
    //ifstream object - an input stream from a file
    std::ifstream inFile;
    std::string str;
    int number;
    char letter;

    inFile.open("people.txt");
    if (inFile.fail())
        std::cout << std::endl << "File not found!" << std::endl;
    else{
        //why always the while loops?!
        while (!inFile.eof()){
            getline(inFile, str);
            std::cout << str << ", ";
            getline(inFile, str);
            number = stoi(str);
            std::cout << number << ", ";
            getline(inFile, str);
            letter = str[0];
            std::cout << letter <<std::endl;
        }
        inFile.close();
    }
    
    std::cout << std::endl << std::endl;
    return (0);
}
