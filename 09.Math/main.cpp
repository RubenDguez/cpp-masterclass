#include <iostream>
#include <cmath>

int main() {
    const double x = 3;
    const double y = 4;
    double z;

    z = std::max(x, y);
    z = std::min(x, y);

    z = pow(x, y);
    z = sqrt(y);
    z = abs(-x);
    z = round(x + 0.314);
    z = ceil(x + 0.568);

    std::cout << z;

    return 0;
}
