#include <iostream>

using std::string;

class Student
{
private:
    string name = "";
    int age = 0;
    double gpa = 0.00;

public:
    // default constructor granted by the compiler
    // it will be NOT-Granted if manually specifying one
    // in this case I had to add it back, because of the
    // subsequent custom constructors.
    Student(){} 
    
    Student(string name)
    {
        this->name = name;
    }
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    Student(string name, int age, double gpa)
    {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }

    void toString()
    {
        std::cout << std::endl;
        std::cout << "Name..: " << this->name << '\n';
        std::cout << "Age...: "  << this->age << '\n';
        std::cout << "GPA...: " << this->gpa << '\n';
    }
};
