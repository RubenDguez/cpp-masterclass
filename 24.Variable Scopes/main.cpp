/**
 * Variable scope in C++ refers to the region of a program
 * where a variable is accessible. The scope determines the
 * visibility and lifetime of a variable.
 *
 * Types of Variable Scope
 * * 1.	Local Scope
 * * 2.	Global Scope
 * * 3.	Block Scope
 * * 4.	Function Scope
 * * 5.	Class/Member Scope (Object Scope) -> Covered in Object Oriented Programming
 * * 6.	Namespace Scope
 * * 7.	Static Scope (Persistent Storage)
 */
#include <iostream>
using std::cin;
using std::cout;
using String = std::string;

namespace Spanish
{
    // namespace scope variable
    const String GREETING = "Hola";
}

namespace English
{
    // namespace scope variable
    const String GREETING = "Hello";
}

void displayMessage(String str, char language);

// Global scope variable
const String GREETING = "Hello";

int main()
{
    // local scope variables
    const String name = "Argenis";
    char language;

    cout << "E = English\n";
    cout << "S = Spanish\n";
    cout << "Please make your language selection: ";
    cin >> language;

    if (language == 'E' || language == 'e' || language == 'S' || language == 's')
    {
        displayMessage(name, language);
    }
    else
    {
        // ! for demonstration purposes only, this declaration is redundant here
        // block scope variable
        const char wrongLanguage = language;

        cout << wrongLanguage << " is not a supported language\n";
    }

    return 0;
}

void displayMessage(String str, char language)
{
    // function scope variable
    const String GREET = (language == 'E' || language == 'e' ? English::GREETING : Spanish::GREETING) + " " + str;
    std::cout << GREET << '\n';
}
