#include <iostream>
#include <ctime>

int main()
{
    // ! NOTE: These are pseudo-random NOT truly random (but close)

    srand(time(NULL));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << "Fist dice   : " << num1 << '\n';
    std::cout << "Second dice : " << num2 << '\n';
    std::cout << "Third dice  : " << num3 << '\n';

    return 0;
}
