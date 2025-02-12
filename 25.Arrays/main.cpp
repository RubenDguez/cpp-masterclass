#include <iostream>
using std::cout;
using String = std::string;

int main()
{
    String cars[] = {"Corvette", "Mustang", "Camry"};

    cout << cars[2] << '\n';

    cars[2] = "Camaro"; 

    cout << "\nCar list: \n";
    for (String car : cars)
    {
        cout << car << '\n';
    }

    String fruits[3];

    fruits[0] = "Mango";
    fruits[1] = "Grape";
    fruits[2] = "Banana";
    cout << "\nFruit list: \n";
    for (String fruit : fruits)
    {
        cout << fruit << '\n';
    }

    double prices[] = {5.99, 7.00, 8.99, 10.99};
    cout << "\nPrice list: \n";
    for (double price : prices)
    {
        cout << price << '\n';
    }

    return 0;
}
