#include "Student.h"

int main()
{
    Student school[4] = {
        Student("Argenis", 43, 3.44),
        Student("Lisa", 43),
        Student("Alex"),
        Student()
    };

    for (int i = 0; i < sizeof(school) / sizeof(school[0]); i++)
    {
        school[i].toString();
    }
    
    return 0;
}
