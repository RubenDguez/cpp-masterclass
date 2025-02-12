#include <iostream>

using std::cout;
using String = std::string;

void swapByVal(String x, String y);
void swapByRef(String &x, String &y);

int main()
{
    String x = "Kool-Aid";
    String y = "Water";

    cout << "Swapping variables using a function pass by Value\n";
    swapByVal(x, y);
    cout << "X: " << x << '\n';
    cout << "Y: " << y << '\n';

    cout << "Swapping variables using a function pass by Reference\n";
    swapByRef(x, y);
    cout << "X: " << x << '\n';
    cout << "Y: " << y << '\n';

    return 0;
}

void swapByRef(String &x, String &y)
{
    String temp;
    temp = x;
    x = y;
    y = temp;
}

void swapByVal(String x, String y)
{
    String temp;
    temp = x;
    x = y;
    y = temp;
}
