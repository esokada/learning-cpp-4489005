// Learning C++ 
// Challenge 06_03
// Upgrade to work with files, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "records.h"

void initialize(StudentRecords&);

int main(){
    int id;
    StudentRecords SR;
    
    initialize(SR);

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    SR.report_card(id);
    SR.report_card_file(id, "student_report_sample.txt");
    
    std::cout << std::endl << std::endl;
    return (0);
}



void initialize(StudentRecords& srec){
    std::ifstream inFile;
    std::string str_1;
    std::string str_2;
    std::string str_3;
    char char_1;
    int number_1;
    int number_2;

    //get students
    inFile.open("students.txt");
    if (inFile.fail())
        std::cout << std::endl << "File not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str_1);
            getline(inFile, str_2);
            number_1 = stoi(str_1);
            srec.add_student(number_1, str_2);
        }
        inFile.close();
    }
    
    //get courses
    inFile.open("courses.txt");
    if (inFile.fail())
        std::cout << std::endl << "File not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str_1);
            getline(inFile, str_2);
            getline(inFile, str_3);
            number_1 = stoi(str_1);
            number_2 = stoi(str_3);
            srec.add_course(number_1, str_2, number_2);
        }
        inFile.close();
    }

    //get grades
    inFile.open("grades.txt");
    if (inFile.fail())
        std::cout << std::endl << "File not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str_1);
            getline(inFile, str_2);
            getline(inFile, str_3);
            number_1 = stoi(str_1);
            number_2 = stoi(str_2);
            srec.add_grade(number_1, number_2,str_3[0]);
        }
        inFile.close();
    }


    // srec.add_student(1, "George P. Burdell");
    // srec.add_student(2, "Nancy Rhodes");

    // srec.add_course(1, "Algebra", 5);
    // srec.add_course(2, "Physics", 4);
    // srec.add_course(3, "English", 3);
    // srec.add_course(4, "Economics", 4);

    // srec.add_grade(1, 1, 'B');
    // srec.add_grade(1, 2, 'A');
    // srec.add_grade(1, 3, 'C');
    // srec.add_grade(2, 1, 'A'); 
    // srec.add_grade(2, 2, 'A');
    // srec.add_grade(2, 4, 'B');
}
