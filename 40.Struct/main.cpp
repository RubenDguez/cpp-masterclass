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

void printStudentInfo(Student s);

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
}

void printStudentInfo(Student s)
{
    std::cout << "Name......: " << s.name << '\n';
    std::cout << "GPA.......: " << s.gpa << '\n';
    std::cout << "Enrolled..: " << ((s.enrolled) ? "True" : "False") << '\n';
    std::cout << '\n';
}
