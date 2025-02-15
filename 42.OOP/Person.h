#include <iostream>

using std::string;

class Person
{
private:
    string name = "John Doe";
    int age = 0;
    bool isWalking = false;
    bool isEating = false;
    bool isSleeping = false;

public:
    string getName()
    {
        return this->name;
    }
    void setName(string name)
    {
        if (name.length() > 3)
        {
            this->name = name;
        }
    }
    int getAge()
    {
        return this->age;
    }
    void setAge(int age)
    {
        if (age > 0)
        {
            this->age = age;
        }
    }
    bool getIsWalking()
    {
        return this->isWalking;
    }
    void toggleWalking()
    {
        this->isWalking = !this->isWalking;
        std::cout << "This person " << (this->isWalking ? "is" : "is not") << " walking\n";
    }
    bool getIsEating()
    {
        return this->isEating;
    }
    void toggleEating()
    {
        this->isEating = !this->isEating;
        std::cout << "This person " << (this->isEating ? "is" : "is not") << " eating\n";
    }
    bool getIsSleeping()
    {
        return this->isSleeping;
    }
    void toggleSleeping()
    {
        this->isSleeping = !this->isSleeping;
        std::cout << "This person " << (this->isSleeping ? "is" : "is not") << " sleeping\n";
    }

    void toString()
    {
        std::cout << '\n';
        std::cout << "Name........: " << this->getName() << '\n';
        std::cout << "Age.........: " << this->getAge() << '\n';
        std::cout << "isWalking...: " << (this->getIsWalking() ? "True" : "False") << '\n';
        std::cout << "isEating....: " << (this->getIsEating() ? "True" : "False") << '\n';
        std::cout << "isSleeping..: " << (this->getIsSleeping() ? "True" : "False") << '\n';
        std::cout << '\n';
    }
};
