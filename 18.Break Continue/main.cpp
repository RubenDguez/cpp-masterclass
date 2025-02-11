#include <iostream>

int main()
{
    // The break keyword will exit out of the loop, breaking the loop as a whole.
    for (int i = 0; i < 20; i++)
    {
        if (i == 13)
        {
            break;
        }
        std::cout << i << '\n';
    }

    // the continue keyword will skip the current iteration, but not break the loop.
    for (int i = 0; i < 20; i++)
    {
        if (i == 13)
        {
            continue;
        }
        std::cout << i << '\n';
    }
    return 0;
}
