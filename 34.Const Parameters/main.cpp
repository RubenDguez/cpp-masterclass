/**
 * Const parameters
 * 
 * parameter that is effectively read-only
 * code is more secure and conveys intent.
 * 
 * useful for references and pointers.
 */

#include <iostream>

using std::cout;
using String = std::string;

void printInfo(String name, int age);
void printSecureInfo(const String &name, const int &age);

int main()
{
    String name = "Argenis";
    int age = 43;

    printInfo(name, age);
    cout << std::endl;

    printSecureInfo(name, age);
    cout << std::endl;

    return 0;
}

// using this function without const in parameters is not a big deal
// since we are passing the arguments by value
// two things to note, 
// 1. name and age do change within the function, displaying wrong information.
// 2. the original values do not change, again these arguments are passed by val.
void printInfo(String name, int age)
{
    name = " ";
    age = 0;
    cout << name << '\n';
    cout << age << '\n';
}

/**
 * using this function with const in parameters is optimal
 * it express intent and the values and references are inmutable
 */
void printSecureInfo(const String &name, const int &age)
{
    // name = " "; this line will throw an error since we cannot change the values
    // age = 0; this line will throw an error since we cannot change the values
    cout << name << '\n';
    cout << age << '\n';
}
