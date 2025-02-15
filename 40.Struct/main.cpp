/**
 * Struct   =   A structure that group related variables under one name
 *              structs can contain many different data types
 *              variables in a struct are known as "members"
 *              members can be access with . "Class Member Access Operator"
 */

#include <iostream>

using std::string;

struct Student
{
    string name;
    double gpa;
    bool enrolled = true;
};

struct Car
{
    string make;
    string model;
    int year;
    string color;
};

void printStudentInfo(Student student);
void printCarInfo(Car &car);

int main()
{
    Student student1;
    student1.name = "Argenis R. Dominguez";
    student1.gpa = 3.6;

    Student student2;
    student2.name = "Lisa Freiwald";
    student2.gpa = 3.8;
    student2.enrolled = false;

    Student classroom[2] = {student1, student2};

    for (int i = 0; i < sizeof(classroom) / sizeof(classroom[0]); i++)
    {
        printStudentInfo(classroom[i]);
    }

    Car dealer[2];
    dealer[0].make = "Ford";
    dealer[0].model = "Mustang";
    dealer[0].year = 2025;
    dealer[0].color = "Black";

    dealer[1].make = "Chevrolet";
    dealer[1].model = "Corvette";
    dealer[1].year = 2023;
    dealer[1].color = "Red";

    for (int i = 0; i < sizeof(dealer) / sizeof(dealer[0]); i++)
    {
        std::cout << &dealer[i] << '\n';
        printCarInfo(dealer[i]);
    }
}

// Pass struct by value
void printStudentInfo(Student student)
{
    std::cout << "Name......: " << student.name << '\n';
    std::cout << "GPA.......: " << student.gpa << '\n';
    std::cout << "Enrolled..: " << ((student.enrolled) ? "True" : "False") << '\n';
    std::cout << '\n';
}

// Pass struct by reference
void printCarInfo(Car &car)
{
    std::cout << &car << '\n';
    std::cout << "Make...: " << car.make << '\n';
    std::cout << "Model..: " << car.model << '\n';
    std::cout << "Year...: " << car.year << '\n';
    std::cout << "Color..: " << car.color << '\n';
    std::cout << '\n';
}
