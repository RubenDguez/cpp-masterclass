#include <iostream>

typedef std::string String;
typedef int Number;

int main() {
    using std::cout;
    using std::cin;
    using std::getline;
    using std::ws;

    String name;
    Number age;

    cout << "What's your age: ";
    cin >> age;

    cout << "What's your full name? ";
    getline(cin >> ws, name);

    cout << "Hello " << name << '\n';
    cout << "You are " << age << " years old \n";

    return 0;
}
