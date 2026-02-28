// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float my_gpa = 0.0f;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here
    //get total points
    float points = 0;
    float credits = 0;

    for (auto x : grades)
        if (x.get_student_id() == id){
            float numerical_grade = 0;
            switch(x.get_grade()){
                case 'A': numerical_grade = 4.0;
                break;
                case 'B': numerical_grade = 3.0;
                break;
                case 'C': numerical_grade = 2.0;
                break;
                case 'D': numerical_grade = 1.0;
                break;
            };
        int i = 0;
        //this while loop is only to find the course
        while(i < courses.size() && courses[i].get_id() != x.get_course_id())
                i++;
        credits += courses[i].get_credits();
        points += courses[i].get_credits() * numerical_grade;
        

    }

    my_gpa = points / credits;

    std::string student_str;
    int n = 0;
    while (n < students.size() && students[n].get_id() != id)
        n++;
    student_str = students[n].get_name(); // Change this to the selected student's name

    std::cout << "The GPA for " << student_str << " is " << my_gpa << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}