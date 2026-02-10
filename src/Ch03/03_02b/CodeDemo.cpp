// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

class cow{
    //class members are private by default
    public:
        //an implicit constructor is always implemented, or you can implement one
        //overloading constructor - classic example is with initialization values for all data members
        //constructors do not specify a return type
        //name must be same as name of class
        cow(std::string name_i, int age_i){
            name = name_i;
            age = age_i;
        };
        //good practice to use the const modifier to prevent getter from modifying objects
        //"const correctness"
        std::string get_name() const{
            return name;
        }
        int get_age() const{
            return age;
        };

    private:
    std::string name;
    int age;
    cow_purpose purpose;
};

//main function is updated in 03_03b
int main(){
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy;
    std::cout << my_cow.name << " is a type-" << (int)my_cow.purpose << " cow." << std::endl;
    std::cout << my_cow.name << " is " << my_cow.age << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
