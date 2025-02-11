/**
 * Based on a random number between 1 - 5
 * The program should prompt the user
 * the appropriate wining prize
 */

#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));
    int randNumber = ((rand() % 5) + 1);

    switch (randNumber)
    {
    case 1:
        std::cout << "You win a bumper sticker!\n";
        break;
    case 2:
        std::cout << "You win a t-shirt!\n";
        break;
    case 3:
        std::cout << "You win a free lunch!\n";
        break;
    case 4:
        std::cout << "You win a gift card!\n";
        break;
    case 5:
        std::cout << "You win concert tickets!\n";
        break;
    }

    return 0;
}
