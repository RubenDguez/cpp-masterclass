#include "Shape.h"

class Cube : public Shape
{
private:
    double side;

public:
    Cube(double side)
    {
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};
