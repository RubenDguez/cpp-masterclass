#include <iostream>

int main()
{
    std::string name;

    while (name.empty())
    {
        std::cout << "Please enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name << '\n';

    return 0;
}
