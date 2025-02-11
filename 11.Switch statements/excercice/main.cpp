/**
 * Create a simple calculator where the user enters +, -, * or /
 * to perform the desired calculation between two numbers
 */

#include <iostream>

int main() {
    double num1;
    double num2;
    char op;

    std::cout << "********** SIMPLE CALCULATOR **********\n";

    std::cout << "Enter number 1: ";
    std::cin >> num1;

    std::cout << "Enter number 2: ";
    std::cin >> num2;

    std::cout << "Please enter + - * / to perform operation: ";
    std::cin >> op;

    switch (op) {
        case '+':
            std::cout << "result: " << (num1 + num2) << '\n';
            break;
        case '-':
            std::cout << "result: " << (num1 - num2) << '\n';
            break;
        case '*':
            std::cout << "result: " << (num1 * num2) << '\n';
            break;
        case '/':
            std::cout << "result: " << (num1 / num2) << '\n';
            break;
        default:
            std::cout << "Please only enter + - * / operators\n";
            return 1;
    }

    std::cout << "****************************************";


    return 0;
}
