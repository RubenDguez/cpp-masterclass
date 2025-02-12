#include <iostream>

using std::cout;
using String = std::string;

int main()
{
    String name = "Argenis Dominguez";
    double gpa = 2.5;
    char grade = 'B';
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    bool student = true;

    cout << "Size of name: " << sizeof(name) << " bytes\n";
    cout << "Size of gpa: " << sizeof(gpa) << " bytes\n";
    cout << "Size of grade: " << sizeof(grade) << " bytes\n";
    cout << "Size of grades: " << sizeof(grades) << " bytes\n";
    cout << "Size of student: " << sizeof(student) << " bytes\n";

    String students[] = {"Argenis", "Lisa", "Alexander"};
    int studentsLength = sizeof(students)/sizeof(String);
    cout << "The students array has " << studentsLength << " elements\n";
    for (int i = 0; i < studentsLength; i++)
    {
        cout << students[i] << '\n';
    }

    return 0;
}
