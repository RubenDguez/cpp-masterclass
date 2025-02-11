/**
 * The ternary operator in C++ provides a concise way
 * to express a conditional statement. It's a shorthand
 * for an if-else construct, allowing you to evaluate a
 * condition and return one of two expressions based on
 * whether the condition is true or false.
 */

#include <iostream>

int main()
{
    const int GRADE = 76;

    /** Determine a passing grade */
    // if (GRADE >= 60)
    // {
    //     std::cout << "You pass!";
    // }
    // else
    // {
    //     std::cout << "You fail!";
    // }

    GRADE >= 60 ? std::cout << "You pass!\n" : std::cout << "You fail!\n";

    /** Determine if a given number is even or odd */
    // if (GRADE % 2 == 0)
    // {
    //     std::cout << "Number is even!";
    // }
    // else
    // {
    //     std::cout << "Number is odd!";
    // }

    // ((GRADE % 2) == 0) ? std::cout << "Number is even!" : std::cout << "Number is odd!";
    GRADE % 2 ? std::cout << "EVEN\n" : std::cout << "ODD\n";

    /** Determine what to do if someone is hungry */
    const bool HUNGRY = false;

    // HUNGRY ? std::cout << "Go have some food\n" : std::cout << "relax and learn C++\n";
    std::cout << (HUNGRY ? "Go have some food\n" : "Relax and learn C++\n");

    return 0;
}
