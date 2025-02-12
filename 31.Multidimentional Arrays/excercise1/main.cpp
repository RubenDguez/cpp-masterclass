#include <iostream>

using std::cin;
using std::cout;

using String = std::string;

namespace USER
{
    int score = 0;
}

namespace CPP
{
    String questions[] = {
        "1. What year was C++ created? ",
        "2. Who created C++",
        "3. What is the predecessor of C++? ",
    };

    String options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                           {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Ca", "D. Mark Zuckenburg"},
                           {"A. C", "B. C+", "D. C--", "D. B++"}};

    char answerKey[] = {'C', 'B', 'A'};

    const int QUESTIONS_SIZE = sizeof(questions) / sizeof(questions[0]);
}

void printQuestion(String array[], int index);
void printOptions(String array[][4], int index);
char getUserAnswer();
void compareUserAnswer(char array[], int index, char option);
void updateUserScore();
void printFinalScore();
void clearConsole();

int main()
{
    for (int i = 0; i < CPP::QUESTIONS_SIZE; i++)
    {
        printQuestion(CPP::questions, i);
        printOptions(CPP::options, i);
        const char USER_OPTION = getUserAnswer();
        compareUserAnswer(CPP::answerKey, i, USER_OPTION);
    }

    printFinalScore();
}

void printQuestion(String array[], int index)
{
    cout << array[index] << "\n\n";
}

void printOptions(String array[][4], int index)
{
    for (int i = 0; i < 4; i++)
    {
        cout << array[index][i] << '\n';
    }
}

char getUserAnswer()
{
    char user_option;
    cout << "\nPlease select an option: ";
    cin >> user_option;
    user_option = toupper(user_option);

    return user_option;
}

void compareUserAnswer(char array[], int index, char option)
{
    if (array[index] != option)
    {
        cout << "\nWrong!" << '\n' << "Answer: " << array[index] << "\n\n";
        return;
    }

    updateUserScore();
}

void updateUserScore()
{
    USER::score++;
}

void printFinalScore()
{
    clearConsole();
    cout << "*****************************\n";
    cout << "*          RESULTS          *\n";
    cout << "*****************************\n";
    cout << "CORRECT ANSWERS: " << USER::score << '\n';
    cout << "NUMBER OF QUESTIONS: " << CPP::QUESTIONS_SIZE << '\n';
    cout << "SCORE: " << ((USER::score / (double)CPP::QUESTIONS_SIZE) * 100) << "%\n";
}

void clearConsole()
{
    cout << "\033[2J\033[1;1H"; // ANSI escape code
}
