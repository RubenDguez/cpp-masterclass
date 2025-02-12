/**
 * Rock Paper Scissors Game
 */

#include <iostream>
#include <ctime>

using std::cin;
using std::cout;

namespace SCORE
{
    int user = 0;
    int computer = 0;
}

void play();
void clearConsole();
void printTie(int user, int computer);
void printScore();
void printOptions();
void chooseWinner(int user, int computer);

int main()
{
    play();
    cout << "\nFinal Score:\n";
    cout << "User: " << SCORE::user << '\n';
    cout << "Computer: " << SCORE::computer << '\n';
    return 0;
}

void play()
{
    srand(time(NULL));

    int user_option;
    int computer_option;

    do
    {
        clearConsole();
        cout << "***** ROCK - PAPER - SCISSORS GAME ****\n";
        printTie(user_option, computer_option);
        printScore();
        printOptions();

        cin >> user_option;
        computer_option = (rand() % 3) + 1;

        chooseWinner(user_option, computer_option);
    } while (user_option != 4);
}

void clearConsole()
{
    cout << "\033[2J\033[1;1H"; // ANSI escape code
}

void printTie(int user, int computer)
{
    if (user != 0 && user == computer)
    {
        cout << "It's a tie!\n";
    }
}

void printScore()
{
    if (SCORE::user || SCORE::computer)
    {
        cout << "Current score: \n";
        cout << "User: " << SCORE::user << " Computer: " << SCORE::computer << '\n';
    }
}

void printOptions()
{
    cout << "1. ROCK\n";
    cout << "2. PAPER\n";
    cout << "3. SCISSORS\n";
    cout << "4. Quit";
    cout << '\n';
    cout << "Please make a selection: ";
}

void chooseWinner(int user, int computer)
{
    if (user == 1 && computer == 2)
        SCORE::computer++;
    if (user == 1 && computer == 3)
        SCORE::user++;

    if (user == 2 && computer == 1)
        SCORE::user++;
    if (user == 2 && computer == 3)
        SCORE::computer++;

    if (user == 3 && computer == 1)
        SCORE::computer++;
    if (user == 3 && computer == 2)
        SCORE::user++;
}
