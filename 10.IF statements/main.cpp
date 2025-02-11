/**
 * In C++, the if statement is a conditional control structure that
 * executes a block of code only if a specified condition is true.
 * If the condition is false, the code block is skipped.
 * The if statement can be followed by an optional else block,
 * which executes if the condition is false. Additionally, you can
 * chain multiple if statements using else if to test multiple conditions
 * sequentially. 
 */
#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age < 0) {
        std::cout << "You have not been born yet!";
    } else if (age < 18) {
        std::cout << "You are not old enough to enter!";
    } else if (age >= 100) {
        std::cout << "You are too old to enter this site!";
    } else {
        std::cout << "Welcome to the site!";
    }

    return 0;
}
