#include "Person.h"
#include "Car.h"

int main()
{
    Person people[1];

    for (int i = 0; i < (sizeof(people) / sizeof(people[0])); i++)
    {
        people[i].toString();
    }

    Car car;
    car.setMake("Chevrolet");
    car.setModel("Impala");
    car.setYear(2017);
    car.setColor(green);

    car.toString();

    Car car2;
    car2.setMake("Ford");
    car2.setModel("Mustang");
    car2.setYear(2024);
    car2.setColor(red);

    car2.toString();

    return 0;
}
