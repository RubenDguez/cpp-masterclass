#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player);
bool checkTie(char *spaces);
void clearConsole();

int main()
{
    char spaces[9];
    std::fill(spaces, spaces + 9, ' ');
    char player = 'X';
    char computer = 'O';

    clearConsole();
    drawBoard(spaces);

    do
    {
        playerMove(spaces, player);
        clearConsole();
        drawBoard(spaces);
        if (checkWinner(spaces, player))
            break;

        if (checkTie(spaces))
            break;

        computerMove(spaces, computer);
        clearConsole();
        drawBoard(spaces);
        if (checkWinner(spaces, player))
            break;
    } while (true);

    for (char slot : spaces)
    {
        std::cout << ((slot != player && slot != computer) ? '-' : slot) << ' ';
    }

    std::cout << "Thanks for playing\n";

    return 0;
}

void drawBoard(char *spaces)
{
    std::cout << std::endl;
    std::cout << "     " << '|' << "     " << '|' << "     " << '\n';
    std::cout << "  " << spaces[0] << "  " << '|' << "  " << spaces[1] << "  " << '|' << "  " << spaces[2] << "  " << '\n';
    std::cout << "     " << '|' << "     " << '|' << "     " << '\n';
    std::cout << "-----------------\n";
    std::cout << "     " << '|' << "     " << '|' << "     " << '\n';
    std::cout << "  " << spaces[3] << "  " << '|' << "  " << spaces[4] << "  " << '|' << "  " << spaces[5] << "  " << '\n';
    std::cout << "     " << '|' << "     " << '|' << "     " << '\n';
    std::cout << "-----------------\n";
    std::cout << "     " << '|' << "     " << '|' << "     " << '\n';
    std::cout << "  " << spaces[6] << "  " << '|' << "  " << spaces[7] << "  " << '|' << "  " << spaces[8] << "  " << '\n';
    std::cout << "     " << '|' << "     " << '|' << "     " << '\n';
    std::cout << std::endl;
}
void playerMove(char *spaces, char player)
{
    int number;
    do
    {
        std::cout << "Please select a slot (1 - 9): ";
        std::cin >> number;
        number--;

        if (number < 0 || number > 8)
        {
            std::cout << "Wrong slot selection\n";
            continue;
        }

        if (spaces[number] != ' ')
        {
            std::cout << "Slot not available\n";
            continue;
        }

        spaces[number] = player;
        break;
    } while (true);
}
void computerMove(char *spaces, char computer)
{
    while (true)
    {
        srand(time(NULL));
        int number = rand() % 9;
        if (spaces[number] != ' ')
            continue;
        spaces[number] = computer;
        break;
    }
}
bool checkWinner(char *spaces, char player)
{
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2]))
    {
        std::cout << (spaces[0] == player ? "YOU WIN!\n" : "YOU LOSE!\n");
    }
    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5]))
    {
        std::cout << (spaces[3] == player ? "YOU WIN!\n" : "YOU LOSE!\n");
    }
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8]))
    {
        std::cout << (spaces[6] == player ? "YOU WIN!\n" : "YOU LOSE!\n");
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6]))
    {
        std::cout << (spaces[0] == player ? "YOU WIN!\n" : "YOU LOSE!\n");
    }
    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7]))
    {
        std::cout << (spaces[1] == player ? "YOU WIN!\n" : "YOU LOSE!\n");
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8]))
    {
        std::cout << (spaces[2] == player ? "YOU WIN!\n" : "YOU LOSE!\n");
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8]))
    {
        std::cout << (spaces[0] == player ? "YOU WIN!\n" : "YOU LOSE!\n");
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6]))
    {
        std::cout << (spaces[2] == player ? "YOU WIN!\n" : "YOU LOSE!\n");
    }
    else
    {
        return false;
    }

    return true;
}
bool checkTie(char *spaces)
{
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
            return false;
    }

    std::cout << "IT IS A TIE!\n";
    return true;
}
void clearConsole()
{
    std::cout << "\033[2J\033[1;1H"; // ANSI escape code
}
