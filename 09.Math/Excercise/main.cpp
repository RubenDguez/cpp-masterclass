/** Hypotenuse on a Right angled triangle */

#include <iostream>
#include <cmath>

double hypotenuse(double a, double b) {
    return sqrt(pow(a, 2) + pow(b, 2));
}

int main() {
    double a;
    double b;

    std::cout << "Right angled triangle Hypotenuse calculator" << '\n';

    std::cout << "Enter value for a: ";
    std::cin >> a;

    std::cout << "Enter value for b: ";
    std::cin >> b;

    std::cout << "The Hypotenuse is: " << hypotenuse(a, b) << '\n';

    return 0;
}
