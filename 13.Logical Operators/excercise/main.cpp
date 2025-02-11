#include <iostream>

double getFah(double temp)
{
    return ((temp * 9.0 / 5.0) + 32.0);
}

double getCel(double temp)
{
    return ((temp - 32.0) * 5.0 / 9.0);
}

int main()
{
    double temp;
    char unit;

    std::cout << "***** TEMPERATURE CONVERSION *****\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> temp;
        std::cout << temp << " Celsius equals " << getFah(temp) << " Fahrenheit\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> temp;
        std::cout << temp << " Fahrenheit equals " << getCel(temp) << " Celsius\n";
    }
    else
    {
        std::cout << "Not a valid conversion unit\n";
    }

    /**
     * Just as a reminder, we could write the above code in a switch statement
     * as follows
     */

    // switch (unit)
    // {
    //     case 'F':
    //     case 'f':
    //         std::cout << "Enter temperature in Celsius: ";
    //         std::cin >> temp;
    //         std::cout << temp << " Celsius equals " << getFah(temp) << " Fahrenheit\n";
    //         break;

    //     case 'C':
    //     case 'c':
    //         std::cout << "Enter temperature in Fahrenheit: ";
    //         std::cin >> temp;
    //         std::cout << temp << " Fahrenheit equals " << getCel(temp) << " Celsius\n";
    //         break;

    //     default:
    //         std::cout << "Not a valid conversion unit\n";
    // }

    std::cout << "**********************************\n";

    return 0;
}
