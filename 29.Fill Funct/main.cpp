#include <iostream>

using std::cout;
using String = std::string;

int main()
{
    const int SIZE = 99;
    String foods[SIZE];

    fill(foods, foods + (SIZE / 3), "Pizza");
    fill(foods + (SIZE / 3), foods + ((SIZE / 3) * 2), "Hamburger");
    fill(foods + ((SIZE / 3) * 2), (foods + SIZE), "Hotdog");

    for (String food : foods)
    {
        cout << food << '\n';
    }

    return 0;
}
