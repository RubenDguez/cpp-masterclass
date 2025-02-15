#include "Student.h"
#include "Pizza.h"

#include <iostream>

using std::string;

int main()
{
    Student school[4] = {
        Student("Argenis", 43, 3.44),
        Student("Lisa", 43),
        Student("Alex"),
        Student()
    };

    for (int i = 0; i < sizeof(school) / sizeof(school[0]); i++)
    {
        school[i].toString();
    }

    string toppings[2] = {"Pepperoni", "Cheese"};
    int size = sizeof(toppings) / sizeof(toppings[0]);
    Pizza pizza1 = Pizza(toppings);
    pizza1.printToppings(size);
    
    return 0;
}
