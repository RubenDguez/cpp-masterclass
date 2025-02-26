/**
 * Enums    =   a user-defined data type that consists
 *              of paired name-integer constants.
 *              GREAT if you have a set of potential options
 */

#include <iostream>

enum EDay
{
    sunday,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};

int main()
{
    EDay today = sunday;

    switch (today)
    {
    case sunday:
        std::cout << "It is Sunday\n";
        break;
    case monday:
        std::cout << "It is Monday\n";
        break;
    case tuesday:
        std::cout << "It is Tuesday\n";
        break;
    case wednesday:
        std::cout << "It is Wednesday\n";
        break;
    case thursday:
        std::cout << "It is Thursday\n";
        break;
    case friday:
        std::cout << "It is Friday\n";
        break;
    case saturday:
        std::cout << "It is Saturday\n";
        break;
    }

    return 0;
}
