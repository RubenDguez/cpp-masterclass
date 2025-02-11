/**
 * In C++, a switch statement is a control flow statement
 * that allows a program to execute different blocks of code
 * based on the value of a single expression. It provides an
 * alternative to using multiple if-else if statements when
 * comparing a single variable against several possible values.
 */

#include <iostream>

void print(std::string str)
{
    std::cout << str;
}

int main()
{
    int month;

    std::cout << "Enter the month (1-12)";
    std::cin >> month;

    switch (month)
    {
    case 1:
        print("It's January");
        break;
    case 2:
        print("It's February");
        break;
    case 3:
        print("It's March");
        break;
    case 4:
        print("It's April");
        break;
    case 5:
        print("It's May");
        break;
    case 6:
        print("It's June");
        break;
    case 7:
        print("It's July");
        break;
    case 8:
        print("It's August");
        break;
    case 9:
        print("It's September");
        break;
    case 10:
        print("It's October");
        break;
    case 11:
        print("It's November");
        break;
    case 12:
        print("It's December");
        break;
    default:
        print("Wrong selection, please select between (1-12)\n");
    }

    return 0;
}
