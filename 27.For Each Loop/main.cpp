#include <iostream>

using std::cout;
using String = std::string;

int main()
{
    String students[] = {"Argenis", "Lisa", "Alexander"};

    for (String student : students)
    {
        cout << student << '\n';
    }

    for (String name : {"Argenis", "Alexis", "Amauris"})
    {
        cout << name << '\n';
    }

    int grades[] = {65, 72, 81,93};
    for (int grade : grades)
    {
        cout << grade << '\n';
    }

    return 0;
}
