#include <iostream>

using std::cin;
using std::cout;
using std::getline;
using String = std::string;

int searchArray(String array[], int size, String element);

int main()
{
    String foods[] = {"pizza", "hamburger", "hotdog"};
    int size = sizeof(foods) / sizeof(String);
    String element;

    cout << "Please enter an element to search: \n";
    getline(cin, element);

    int index = searchArray(foods, size, element);

    if (index == -1)
    {
        cout << element << " is not in the array\n";
        return 0;
    }

    cout << element << " is at index " << index << '\n';
    return 0;
}

int searchArray(String array[], int size, String element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }

    return -1;
}
