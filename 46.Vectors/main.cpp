/**
 * Vectors  =   is a dynamic array provided by the Standard Template Library (STL).
 *              It is part of the <vector> header and allows you to store elements
 *              in a resizable array structure. Unlike a regular array, a std::vector
 *              can dynamically resize itself when elements are added or removed.
 *
 *  *           Common Functions
 *  *           push_back(value)            |   Adds an element at the end
 *  *           pop_back()                  |   Removes the last element
 *  *           size()                      |   Returns the number of elements
 *  *           capacity()                  |   Returns the current allocated size
 *  *           resize(n)                   |   Resizes the vector to contain n elements
 *  *           at(index)                   |   Accesses an element with bounds checking
 *  *           front() / back()            |   Returns first / last element
 *  *           insert(iterator, value)     |   Inserts value at a given position
 *  *           erase(iterator)             |   Removes an element at a given position
 *  *           clear()                     |   Removes all elements
 *
 *  ?           When should you use Vectors	??
 *
 *  ?           When you need a resizable array.
 *  ?           When you require fast random access.
 *  ?           When insertions/deletions happen mostly at the end.
 *  ?           When memory management should be handled automatically.
 */

#include <iostream>
#include "Person.h"

namespace CENSUS
{
    std::vector<Person> people;
}

void print(std::vector<Person> *vector);
void add(std::vector<Person> *vector);

int main()
{
    char cont;
    do
    {
        std::cout << "Enter required informatin: \n";
        add(&CENSUS::people);
        std::cout << "Do you want to enter another person? Y/N: ";
        std::cin >> cont;
    } while (cont != 'N' && cont != 'n');

    print(&CENSUS::people);

    return 0;
}

void add(std::vector<Person> *vector)
{
    std::string first_name;
    std::string last_name;
    int age;

    std::cout << "Enter First Name..: ";
    std::getline(std::cin >> std::ws, first_name);

    std::cout << "Enter Last Name...: ";
    std::getline(std::cin >> std::ws, last_name);

    std::cout << "Enter Age.........: ";
    std::cin >> age;

    Person person(first_name, last_name, age);

    vector->push_back(person);
    vector->shrink_to_fit();
}

void print(std::vector<Person> *vector)
{
    for (int i = 0; i < vector->size(); i++)
    {
        vector->at(i).print();
        std::cout << vector->at(i).toString() << '\n';
    }
}
