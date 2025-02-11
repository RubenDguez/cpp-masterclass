/**
 * Function overloading is a feature in C++ that allows multiple functions
 * to have the same name but different parameter lists (different number or
 * types of parameters).
 * 
 * The compiler determines which function to call based on the arguments provided.
 * 
 * Rules for Function Overloading
 *  1.	Functions must have the same name.
 *  2.	They must have different parameter lists (number, types, or order of parameters).
 *  3.	The return type alone cannot differentiate overloaded functions.
 * 
 */

#include <iostream>

// function declarations
double Multiply(double a, double b);
int Multiply(int a, int b);
int Multiply(int a, int b, int c);

int main()
{
    // declaration
    int a, b, c;
    double x, y;
    
    // assignment
    a = 5; b = 10; c = 15;
    x = 100.99; y = 200.65;

    std::cout << "Multiply two doubles "<< x << " and " << y << ": " << Multiply(x, y) << '\n';
    std::cout << "Multiply two integers " << a << " and " << b << ": " << Multiply(a, b) << '\n';
    std::cout << "Multiply three integers " << a << ", " << b << " and " << c << ": " << Multiply(a, b, c) << '\n';

    return 0;
}

double Multiply(double a, double b)
{
    return a * b;
}
int Multiply(int a, int b)
{
    return a * b;
}
int Multiply(int a, int b, int c)
{
    return a * b * c;
}
