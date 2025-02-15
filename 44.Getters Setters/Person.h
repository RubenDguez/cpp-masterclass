#include <iostream>

using std::string;

class Person
{
private:
    string name;
    int age;

public:
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
    void setAge(int age)
    {
        if (age < 0)
        {
            this->age = 0;
            return;
        }
        if (age > 100)
        {
            this->age = 100;
            return;
        }
        this->age = age;
    }
    int getAge()
    {
        return this->age;
    }
};
