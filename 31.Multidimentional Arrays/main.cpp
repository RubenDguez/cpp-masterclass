#include <iostream>

using std::cout;
using std::endl;

using String = std::string;

int main()
{
    String cars[][3] = {{"Ford", "Chevrolet", "Dodge"},
                        {"Mustang", "Escape", "F-150"},
                        {"Corvette", "Equinox", "Silverado"},
                        {"Challenger", "Durango", "Ram 1500"}};

    const int ROWS = sizeof(cars) / sizeof(cars[0]);
    const int COLUMNS = sizeof(cars[0]) / sizeof(cars[0][0]);

    // print header
    cout << "CARS List \n\n";
    for (int i = 0; i < COLUMNS; i++)
    {
        cout << "| " << cars[0][i] << ((cars[0][i].length() >= 8) ? "\t" : "\t\t");
    }
    cout << endl << endl;

    // print body
    for (int i = 0; i < COLUMNS; i++)
    {
        for (int j = 1; j < ROWS; j++)
        {
            if (cars[j][i].empty()) continue;
            cout << "| " << cars[j][i] << ((cars[j][i].length() >= 6) ? "\t" : "\t\t");
        }
        cout << endl;
    }
    return 0;
}
