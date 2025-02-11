/**
 * A function in C++ is a block of code that performs a specific task.
 * Functions help in modularizing code, making it more readable, reusable, and easier to debug.
 * 
 * Parameters and Arguments are related but distinct concepts used in function calls.
 * 
 * Parameters
 * - Parameters are placeholders defined in a function’s declaration or definition.
 * - They specify what kind of input a function expects.
 * 
 * Arguments
 * - Arguments are actual values passed to a function when it is called.
 * - These values replace the parameters during execution.
 */
#include <iostream>

typedef std::string String;
typedef int Number;

void happyBirthday(String name, Number age);

int main()
{
    String NAME = "Argenis";
    Number AGE = 43;
    happyBirthday(NAME, AGE);
    return 0;
}

void happyBirthday(String name, Number age)
{
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday dear " << name << '\n';
    std::cout << "Happy Birthday to you!\n\n";

    for (int i = 1; i <= age; i++) {
        std::cout << i << ' ';
    }

    std::cout << std::endl;
}
