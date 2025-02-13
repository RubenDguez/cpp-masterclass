/**
 * Null value = a special value that means something has 'no value'
 *              When a pointer is holding a null value,
 *              that pointer is not pointing to anything (null pointer)
 * 
 * nullptr = keyword represents a null pointer literal
 * 
 * nullptrs are helpful when determining if an address
 * was successfully assigned to a pointer
 */

#include <iostream>

int main()
{
    int x = 123;

    int *pX = nullptr;

    pX = &x;

    if (pX == nullptr)
    {
        std::cout << "Address was not assigned!\n";
        return 0;
    }

    std::cout << "Address was assigned successfully!\n";
    std::cout << "*pX: " << *pX << '\n';

    return 0;
}
