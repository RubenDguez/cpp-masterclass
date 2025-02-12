/**
 * Banking Program
 * *    1. Deposit Money
 * *    2. Withdraw Money
 * *    3. Show Balance
 */

#include <iostream>
using String = std::string;
using std::cin;
using std::cout;

String deposit();
String withdraw();
double getCurrentBalance();
void printCurrentBalance();
void printHeader(String error);
void clearConsole();

double balance = 0;

int main()
{
    char option;
    double currentBalance;
    bool isPrintHeader = true;
    String error = "";

    do
    {
        if (isPrintHeader)
        {
            clearConsole();
            printHeader(error);
        }

        // setting to true in case user selects wrong option
        // see the default in switch (option)
        isPrintHeader = true;

        cin >> option;

        currentBalance = getCurrentBalance();

        switch (option)
        {
        case 'D':
        case 'd':
            error = deposit();
            break;
        case 'W':
        case 'w':
            error = withdraw();
            break;
        case 'B':
        case 'b':
            printCurrentBalance();
            break;
        default:
            cout << "Invalid option, please select a valid option: ";
            isPrintHeader = false;
        }
    } while (option != 'q' || option != 'Q');

    return 0;
}

String deposit()
{
    double amount;

    cout << "\nPlease enter the amount to deposit: ";
    cin >> amount;

    if (amount <= 0)
    {
        return "Invalid amount to deposit.";
    }

    balance = balance + amount;
    cout << "Deposit successful, your new current balance: " << getCurrentBalance() << '\n';
    return "";
}

String withdraw()
{
    double amount;

    if (balance <= 0)
    {
        return "Not enough balance to withdraw";
    }

    cout << "\nPlease enter the amount to withdraw: ";
    cin >> amount;

    if (balance < amount)
    {
        return "Not enough balance to withdraw " + std::to_string(amount);
    }

    balance = balance - amount;
    cout << "Withdraw successful, your new current balance: " << getCurrentBalance() << '\n';
    return "";
}

double getCurrentBalance()
{
    return balance;
}

void printCurrentBalance()
{
    char key;

    clearConsole();
    cout << "Current balance: " << getCurrentBalance() << '\n';

    do
    {
        cout << "Press any key to continue...";
        cin >> key;
    } while (!key);
}

void printHeader(String error)
{
    cout << "***** BANKING SYSTEM *****\n";
    cout << "* Options: \n";
    cout << "* D = Deposit \n";
    cout << "* W = Withdraw \n";
    cout << "* B = Display Balance \n";
    cout << "* Q = quit \n";
    if (!(error.empty()))
        cout << "\n***** Error: " << error << '\n';
    cout << "Please make a selection: ";
}

void clearConsole()
{
    cout << "\033[2J\033[1;1H"; // ANSI escape code
}
