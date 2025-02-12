#include <iostream>

using std::cout;
using std::cin;
using std::getline;
using String = std::string;

int main()
{
    String foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);


    for (int i = 0; i < size - 1; i++)
    {
        String temp;
        
        cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
        getline(cin, temp);

        if (temp == "q") break;

        foods[i] = temp;
    }

    // ! for demonstration purposes
    foods[4] = "Soup"; 

    cout << "\nThis is the list of foods you like: \n\n";
    /**
     * This is one way of displaying only the array slots that are not empty
     * Pros and Cons in this case rely that it will iterate over every single
     * Array slot
     * 
     * This approach will display the food "Soup" which has been added
     * arbitrarily for pros and cons demonstration
     */
    for (String food : foods)
    {
        if (food.empty()) continue;
        cout << food << '\n';
    }

    /**
     * this is another way of displaying the array slots that are not empty
     * and perhaps more efficient
     * Pros and Cons in this case rely that it will quit as soon as an empty
     * slot is reached.
     * 
     * This approach will not display the food "Soup" which has been added
     * arbitrarily for pros and cons demonstration
     */
    for (int i = 0; !foods[i].empty(); i++)
    {
        cout << foods[i] << '\n';
    }

    return 0;
}
