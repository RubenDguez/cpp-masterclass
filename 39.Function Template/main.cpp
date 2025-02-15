/**
 * Function Template    =   describes what a function looks like
 *                          Can be used to generate as many overloaded functions
 *                          as needed, each using different data types 
 */

#include <iostream>

template <typename T, typename K> auto max(T x, K y)
{
    return (x > y) ? x : y;
}
template <typename T, typename K> auto min(T x, K y)
{
    return (x > y) ? y : x;
}

int main()
{
    std::cout << max(2.5, 1.1) << '\n';
    std::cout << min(2.5, 1) << '\n';

    return 0;
}
