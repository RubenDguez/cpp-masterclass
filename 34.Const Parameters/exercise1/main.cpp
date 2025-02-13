/**
 * Test Credit Card Accounts Numbers using Luhn Algorithm
 * 
 * Rules:
 *  * 1.    Double every second digit from right to left
 *  *       If doubled number is a 2 digit, split them
 *  * 2.    Add all single digits from step 1
 *  * 3.    Add all odd numbered digits from right to left
 *  * 4.    Sum results from steps 2 and 3
 *  * 5.    If step 4 is divisible by 10, # is valid
 */

#include <iostream>

using std::cout;
using std::cin;

using String = std::string;

int getDigit(const int number);
int sumOddDigits(const String cardNumber);
int sumEvenDigits(const String cardNumber);

int main()
{
    String cardNumber;
    int result = 0;

    cout << "Enter a credit card #: ";
    cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    cout << cardNumber <<((result % 10) == 0 ? " is valid" : " is not valid");
    cout << std::endl;

    return 0;
}

int getDigit(const int number)
{
    return ((number % 10) + (number / 10));
}

int sumOddDigits(const String cardNumber)
{
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += cardNumber[i] - '0';
    }

    return sum;
}

int sumEvenDigits(const String cardNumber)
{
    int sum = 0;
    for(int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}
