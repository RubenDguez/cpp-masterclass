/**
 * Memory Address = A location in memory where data is stored
 * a memory address can be accessed with the '&' (address-of operator);
 * 
 * In one random run I've got the following memory addresses in hex
 * | variable name    | mem address   | dec value     | diff      |
 * | &name            | 0x16ba2abc0   | 6100790208    |           |
 * | &age             | 0x16ba2abbc   | 6100790204    | 4         |
 * | &student         | 0x16ba2abbb   | 6100790203    | 1         |
 * 
 * this is a demonstration as of why it is important to use the appropriate
 * data type when creating our programs, since data types varies in 
 * memory usage.
 */

#include <iostream>

using std::cout;
using String = std::string;

int main()
{
    String name = "Argenis";
    int age = 43;
    bool student = true;

    cout << &name << '\n';
    cout << &age << '\n';
    cout << &student << '\n';
    
    return 0;
}
