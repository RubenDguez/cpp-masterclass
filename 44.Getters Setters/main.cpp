#include "Person.h"

int main()
{
    Person p1;
    p1.setName("Argenis");
    p1.setAge(43);

    std::cout << "Name..: " << p1.getName() << '\n';
    std::cout << "Age...: " << p1.getAge() << '\n';

    return 0;
}
