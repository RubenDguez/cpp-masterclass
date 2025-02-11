#include <iostream>

int main()
{
    // integer stores whole numbers (excluding or truncating decimals)
    int year = 2025;
    int age = 43;

    // double stores numbers including decimals
    double price = 10.99;
    double gpa = 3.35;
    double temperature = 85.21;

    // single characters
    char grade = 'A';
    char initial = 'R';

    // boolean
    bool isStudent = true;
    bool isValid = false;

    // strings (Object that represents a sequence of characters)
    std::string name = "Argenis";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age <<  " years old." << '\n';

    return 0;
}
