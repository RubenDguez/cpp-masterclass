#include <iostream>

using std::string;

enum EColor
{
    red,
    blue,
    green
};

class Car
{
private:
    string make;
    string model;
    int year;
    EColor color;

    string getColorString(EColor color)
    {
        switch (color)
        {
        case 0:
            return "Red";
        case 1:
            return "Blue";
        case 2:
            return "Green";
        }
    }

public:
    string getMake()
    {
        return this->make;
    }
    void setMake(string make)
    {
        if (make.length() > 3)
        {
            this->make = make;
        }
    }
    string getModel()
    {
        return this->model;
    }
    void setModel(string model)
    {
        if (model.length() > 3)
        {
            this->model = model;
        }
    }
    int getYear()
    {
        return this->year;
    }
    void setYear(int year)
    {
        if (year > 2000)
        {
            this->year = year;
        }
    }
    EColor getColor()
    {
        return this->color;
    }
    void setColor(EColor color)
    {
        this->color = color;
    }
    void toString()
    {
        std::cout << std::endl;
        std::cout << "Make...: " << this->make << '\n';
        std::cout << "Model..: " << this->model << '\n';
        std::cout << "Year...: " << this->year << '\n';
        std::cout << "Color..: " << this->getColorString(this->color) << '\n';
        std::cout << std::endl;
    }
};
