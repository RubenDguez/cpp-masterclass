#include "Cube.h"
#include "Sphere.h"

#include <iostream>

int main()
{
    Cube cube = Cube(10);
    Sphere sphere = Sphere(5);

    std::cout << "Cube Area....: " << cube.getArea() << "cm^2" << '\n';
    std::cout << "Cube Volume..: " << cube.getVolume() << "cm^3" << '\n';

    std::cout << "Sphere Area....: " << sphere.getArea() << "cm^2" << '\n';
    std::cout << "Sphere Volume..: " << sphere.getVolume() << "cm^3" << '\n';

    return 0;
}
