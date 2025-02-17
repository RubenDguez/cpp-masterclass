#include <iostream>

class Person
{
private:
    std::string first_name;
    std::string last_name;
    int age;

public:
    Person(std::string first_name, std::string last_name, int age)
    {
        this->setFirstName(first_name);
        this->setLastName(last_name);
        this->setAge(age);
    }

    void setFirstName(std::string str)
    {
        this->first_name = str;
    }
    void setLastName(std::string str)
    {
        this->last_name = str;
    }
    void setAge(int age)
    {
        this->age = age;
    }

    std::string toString()
    {
        return "{\"firstName\" : \"" + this->first_name + "\", \"lastName\" : \"" + this->last_name + "\", \"age\" : " + std::to_string(this->age) + "}";
    }
    void print()
    {
        std::cout << "First Name..: " << this->first_name << '\n';
        std::cout << "Last Name...: " << this->last_name << '\n';
        std::cout << "Age.........: " << this->age << '\n';
        std::cout << std::endl;
    }
};
