/**
 * The 'return' keyword in C++ is used inside a function to:
 *  1.	Terminate the function execution and return control back to the caller.
 *  2.	Send a value back to the caller (if the function has a return type other than void).
 */

#include <iostream>

typedef std::string String;

double square(double length);
double cube(double length);
String getFullName(String firstName, String lastName);

int main()
{
    const double length = 5.0;
    double squareArea = square(length);
    double cubeArea = cube(length);

    const String firstName = "Argenis";
    const String lastName = "Dominguez";
    String fullName = getFullName(firstName, lastName);

    std::cout << "Hello " << fullName << '\n';
    std::cout << "The area of a square with sides of " << length << "cm is: " << squareArea << "cm^2\n";
    std::cout << "The volume of an object with sides of " << length << "cm is: " << cubeArea << "cm^3\n";

    return 0;
}

double square(double length)
{
    double result = length * length;
    return result;
}

double cube(double length)
{
    double result = length * length * length;
    return result;
}

String getFullName(String firstName, String lastName)
{
    String fullName = firstName + ' ' + lastName;
    return fullName;
}
