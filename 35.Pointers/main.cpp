/**
 * Pointers =   variable that stores a memory address of another variable
 *              sometimes it's easier to work with an address
 * 
 * & address of operator
 * * dereference operator
 */

#include <iostream>

using std::cout;

using String = std::string;

int main()
{
    String name = "Argenis";
    int age = 43;
    String freePizzas[5] = {"Pepperoni", "Hawaiian", "Meat Lovers", "Vegetables", "Chicken BBQ"};

    String *pName = &name;
    int *pAge = &age;
    String *pFreePizzas = freePizzas; // no need to add & here since arrays are variables point to a mem address

    cout << "Memory address stored in *pName: " << pName << '\n';
    cout << "Value in mem address stored at *pName: " << *pName << '\n';
    
    cout << "Memory address stored in *pAge: " << pAge << '\n';
    cout << "Value in mem address stored at *pAge: " << *pAge << '\n';
    
    cout << "Memory address stored in *pFreePizzas: " << pFreePizzas << '\n';
    cout << "Value in mem address stored at *pFreePizzas: " << *pFreePizzas << '\n'; // first element of the array is accessed here

    return 0;
}
