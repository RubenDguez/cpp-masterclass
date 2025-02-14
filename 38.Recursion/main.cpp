/**
 * Recursion    =   a programming technique where a function
 *                  invokes itself form within
 *                  break a complex concept into repeatable
 *                  single steps
 * 
 * (iterative vs recursion)
 * 
 * advantages = les code and is clear useful for sorting and searching algorithms
 * disadvantages = uses more memory, slower
 */

#include <iostream>

// void walkIteratively(int steps);
// void walkRecursively(int steps);
double factorial(int number);

int main()
{
    // std::cout << "Iteratively: \n";
    // walkIteratively(10);

    // std::cout << "Recursively: \n";
    // walkRecursively(10);

    int number;
    std::cout << "Enter a positive number to calculate factorial: ";
    std::cin >> number;
    std::cout << number << "!: " << factorial(number) << '\n';

    return 0;
}

void walkIteratively(int steps)
{
    for (int i = 0; i < steps; i++)
    {
         std::cout << "You take a step! " << i << '\n';
    }
}
void walkRecursively(int steps)
{
    if (steps > 0)
    {
        std::cout << "You take a step! " << steps << '\n';
        walkRecursively(steps - 1);
    }
}

double factorial(int number)
{   
    if (number <= 0) {
        std::cout << "Factorial number should be less or equals to zero.";
        return 0;
    }

    if (number > 1)
    {
        return number * factorial(number - 1);
    }

    return 1;
}
