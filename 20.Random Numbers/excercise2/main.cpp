#include <iostream>
#include <ctime>

int main()
{
    int num;
    int guess;
    const int MAX_TRY = 3;
    int currentTry = 0;

    srand(time(NULL));
    num = ((rand() % 10) + 1);

    std::cout << "***** NUMBER GUESSING GAME *****\n";

    do
    {
        std::cout << (currentTry != 0 ? "Try again, please enter a number between 1 - 10: " : "Please enter a number between 1 - 10: ");
        std::cin >> guess;
        currentTry++;
    } while (guess != num && currentTry != MAX_TRY);

    if (guess == num)
    {
        std::cout << "\nYou win, the number was indeed " << num << '\n';
    }
    else
    {
        std::cout << "\nSorry, you did not win this time, the number was " << num << '\n';
    }

    std::cout << "********************************\n";

    return 0;
}
