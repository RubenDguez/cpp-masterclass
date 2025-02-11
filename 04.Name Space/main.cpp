#include <iostream>

namespace First {
    int x = 1;
}

namespace Second {
    int x = 2;
}

void printFirstValue() {
    std::cout << "The value of X in namespace First is: " << First::x << '\n';
}

void printSecondValue() {
    std::cout << "The value of X in namespace Second is: " << Second::x << '\n';
}

void printUsingNamespaceName() {
    using std::cout;
    using namespace First;

    cout << "The value of X in namespace First is: " << x << '\n';
}

int main() {
    printFirstValue();
    printSecondValue();

    printUsingNamespaceName();

    return 0;
}
