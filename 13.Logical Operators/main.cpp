/**
 * Logical Operators
 * 
 * * Logical AND (&&): Returns true if both operands are true; otherwise, it returns false.
 * * Logical OR  (||): Returns true if at least one of the operands is true; it returns false only if both operands are false
 * * Logical NOT (!) : Returns true if the operand is false, and false if the operand is true. It inverts the truth value of the operand.
 */

#include <iostream>

int main() {
    int temp;

    std::cout << "Enter the temperature in F : ";
    std::cin >> temp;

    /** Using logical AND (&&) operator */
    if (temp > 68 && temp < 75)
    {
        std::cout << "The temperature is good!\n";
    }
    else 
    {
        std::cout << "The temperature is bad!\n";
    }

    /** Using logical OR (||) operator
     * 
     * When using the logical OR operator, only one of the statements
     * should be true in order to treat the statement as true, thus
     * in some cases the whole evaluation does not get performed, since
     * there is a chance that the first evaluation (left evaluation)
     * is true; making it a bit more performant than AND or OR operators
     */
    if (temp <= 68 || temp >= 75)
    {
        std::cout << "The temperature is bad!\n";
    }
    else 
    {
        std::cout << "The temperature is good!\n";
    }

    /** Using logical NOT (!) operator */
    if (!(temp <= 68 || temp >= 75))
    {
        std::cout << "The temperature is good!\n";
    }
    else 
    {
        std::cout << "The temperature is bad!\n";
    }

    return 0;
}
