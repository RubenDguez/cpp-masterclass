#include <iostream>

typedef std::string String;

int main() {
    using std::cout;
    using std::cin;
    using std::getline;

    String name;

    cout << "Enter your name: ";
    getline(cin, name);

    if (name.empty())
    {
        cout << "You did not enter your name\n";
    }
    else if (name.length() > 12) {
        cout << "Your name cannot be over 12 chars!\n";
    }
    else
    {
        cout << "Welcome " << name << '\n';
    }

    cout << "Your name starts with an " << name.at(0) << '\n';

    name.append("@gmail.com");
    cout << "Your username is now " << name << '\n';

    name.clear();
    cout << "Your name has securely being clear out to prevent leaks!" << name << '\n';

    return 0;
}
