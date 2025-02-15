#include <iostream>

using std::string;

class Pizza
{
private:
    string *toppings = NULL;

public:
    Pizza(string *toppings) {
        this->toppings = toppings;
    }

    void printToppings(int size)
    {
        std::cout << std::endl;
        for (int i = 0; i < size; i++)
        {
            std::cout << "Topping #" << i + 1 << ": " << this->toppings[i] << '\n';
        }
    }
};
